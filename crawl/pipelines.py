# Define your item pipelines here
#
# Don't forget to add your pipeline to the ITEM_PIPELINES setting
# See: https://docs.scrapy.org/en/latest/topics/item-pipeline.html


import os
import subprocess
from functools import partial
from multiprocessing.dummy import Pool
from urllib import parse as urlparse
from crawl.items import CppreferenceItem
from crawl.items import CplusplusItem

# useful for handling different item types with a single interface
from itemadapter import ItemAdapter


class CrawlPipeline:
    def __init__(self):
        self.thread_pool = Pool()

    def process_item(self, script_item, spider):
        if isinstance(script_item, CppreferenceItem):
            self.dump_cppreference(script_item)
        elif isinstance(script_item, CplusplusItem):
            self.dump_cplusplus(script_item)

        return script_item

    def dump_cppreference(self, script_item):
        BASE_FOLDER = "cppreference"
        BASE_URL = "https://en.cppreference.com/w/cpp"
        self.dump_cpp_file(script_item["path"], script_item["script"], BASE_FOLDER, BASE_URL)

    def dump_cplusplus(self, script_item):
        BASE_FOLDER = "cplusplus"
        BASE_URL = "https://cplusplus.com/reference"
        self.dump_cpp_file(script_item["path"], script_item["script"], BASE_FOLDER, BASE_URL)

    def dump_cpp_file(self, path, source_code, base_folder, base_url):
        url_path = urlparse.quote(path).replace("%25", "%")
        url_path = os.path.normpath(url_path)
        root, base = os.path.split(url_path)
        folder_path = os.path.join(base_folder, root)
        os.makedirs(folder_path, exist_ok=True)
        script = f"// {base_folder} link {base_url}/{url_path}\n"
        script += source_code
        cpp_path = os.path.join(folder_path, base + ".cpp")
        with open(os.path.join(folder_path, base + ".cpp"), "w", encoding="utf-8") as wf:
            wf.write(script.strip() + "\n")

        # NOTES(timmyliang): run clang format code.
        commands = ["clang-format", "-i", cpp_path]
        self.thread_pool.apply_async(partial(subprocess.call, commands, shell=True))

        # url_path = item["path"]

    def close_spider(self, spider):
        self.thread_pool.close()
        self.thread_pool.join()
