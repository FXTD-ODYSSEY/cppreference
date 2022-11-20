# Define your item pipelines here
#
# Don't forget to add your pipeline to the ITEM_PIPELINES setting
# See: https://docs.scrapy.org/en/latest/topics/item-pipeline.html


# useful for handling different item types with a single interface
from itemadapter import ItemAdapter
import json


class CrawlPipeline:
    def __init__(self):
        self.data = []
        self.fp = open("output.json", "w", encoding="utf=8")

    def process_item(self, item, spider):
        self.data.append(dict(item))
        return item

    def close_spider(self, spider):
        json.dump(self.data, self.fp, indent=4, ensure_ascii=False)
        self.fp.close()

    # def process_item(self, item, spider):
    #     return item
