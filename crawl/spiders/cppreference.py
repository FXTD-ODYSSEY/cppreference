import scrapy
from crawl.items import CppreferenceItem
from crawl.items import CplusplusItem
from functools import partial

class CppreferenceSpider(scrapy.Spider):
    name = "cppreference"
    base_url = "https://en.cppreference.com"
    allowed_domains = ["en.cppreference.com"]
    start_urls = ["https://en.cppreference.com/w/cpp/language"]
    links = set()
    
    def parse(self, response, depth=0):
        if depth >= 10:
            return

        # NOTE(timmyliang): get text element
        text_list = response.xpath('//div[@class="t-example"]/div[2]').xpath("string(.)").extract()
        if text_list:
            url = response.url
            text = text_list[-1]
            self.logger.warning(url)
            code_item = CppreferenceItem()
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


class CplusplusSpider(scrapy.Spider):
    name = "cplusplus"
    base_url = "https://cplusplus.com"
    allowed_domains = ["cplusplus.com"]
    start_urls = ["https://cplusplus.com/reference/"]
    links = set()
    
    def parse(self, response, depth=0):
        if depth >= 10:
            return

        pattern = '/reference/'
        # NOTE(timmyliang): get text element
        text_list = response.xpath('//td[@class="source"]').xpath("string(.)").extract()
        if text_list:
            url = response.url
            text = text_list[-1]
            self.logger.warning(url)
            code_item = CplusplusItem()
            code_item["path"] = url.split(pattern)[-1]
            code_item["script"] = text.replace(" ", "")
            yield code_item

        links = response.xpath("//a/@href").extract()
        links = {link for link in set(links) if link.startswith(pattern)}
        for link in links:
            link = link.split("#")[0]
            if link in self.links:
                continue
            self.links.add(link)
            link = self.base_url + link
            yield scrapy.Request(url=link, callback=partial(self.parse, depth=depth + 1))
