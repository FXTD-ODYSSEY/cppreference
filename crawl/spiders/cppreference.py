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
        if depth >= 10:
            return
    
        # NOTE(timmyliang): get text element
        text_list = response.xpath('//div[@class="t-example"]/div[2]').xpath("string(.)").extract()
        if text_list:
            url = response.url
            text = text_list[-1]
            self.logger.warning(url)
            code_item = CodeItem()
            code_item["path"] = url.split("/w/cpp/")[-1]
            code_item["script"] = text.replace(" ", "")
            yield code_item
        
        links = response.xpath("//a/@href").extract()
        links = {link for link in set(links) if link.startswith("/w/cpp/")}
        for link in links:
            link = link.split("#")[0]
            if link in self.links:
                continue

            self.links.add(link)
            link = self.base_url + link
            yield scrapy.Request(url=link, callback=partial(self.parse, depth=depth + 1))
