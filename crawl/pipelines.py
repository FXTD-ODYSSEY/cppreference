# Define your item pipelines here
#
# Don't forget to add your pipeline to the ITEM_PIPELINES setting
# See: https://docs.scrapy.org/en/latest/topics/item-pipeline.html


import os
import subprocess
from functools import partial
from multiprocessing.dummy import Pool
from urllib import parse as urlparse

# useful for handling different item types with a single interface
from itemadapter import ItemAdapter


class CrawlPipeline:
    base_folder = "cppreference"
    base_url = "https://en.cppreference.com/w/cpp"

    def __init__(self):
        self.thread_pool = Pool()

    def process_item(self, item, spider):
        url_path = item["path"]
        path = urlparse.quote(url_path)
        root, base = os.path.split(path)
        folder_path = os.path.join(self.base_folder, root)
        os.makedirs(folder_path, exist_ok=True)
        script = f"// cppreference link {self.base_url}/{url_path}\n"
        script += item["script"]
        cpp_path = os.path.join(folder_path, base + ".cpp")
        with open(os.path.join(folder_path, base + ".cpp"), "w", encoding="utf-8") as wf:
            wf.write(script.strip() + "\n")

        commands = ["clang-format", "-i", cpp_path]
        self.thread_pool.apply_async(partial(subprocess.call, commands, shell=True))

        return item

    def close_spider(self, spider):
        self.thread_pool.close()
        self.thread_pool.join()
