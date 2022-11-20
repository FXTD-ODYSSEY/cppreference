import scrapy
from crawl.items import CodeItem
from bs4 import BeautifulSoup
from functools import partial


class CppreferenceSpider(scrapy.Spider):
    name = "cppreference"
    base_url = "https://en.cppreference.com"
    allowed_domains = ["en.cppreference.com"]
    start_urls = ["https://en.cppreference.com/w/cpp/language"]
    links = set()
    # @add_separator
    def parse(self, response, depth=0):
        if depth >= 3:
            return
        links = response.xpath("//a/@href").extract()
        links = {link for link in set(links) if link.startswith("/w/cpp/")}

        for index, link in enumerate(links):
            link = link.split("#")[0]
            if link in self.links:
                continue

            self.links.add(link)

            # NOTE(timmyliang): get text element
            text_list = response.xpath('//div[@class="t-example"]/div[2]').xpath("string(.)").extract()
            if text_list:
                text = text_list[-1]
                self.logger.warning(link)
                code_item = CodeItem()
                code_item["path"] = link.replace("/w/cpp/", "")
                code_item["script"] = text.replace(" ", "")
                yield code_item

            link = self.base_url + link
            yield scrapy.Request(url=link, callback=partial(self.parse, depth=depth + 1))
