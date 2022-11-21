// cppreference link https://en.cppreference.com/w/cpp/regex/sub_match/str
#include <cassert>
#include <iostream>
#include <regex>
#include <string>

int main()
{
    const std::string html { R"("<a href="https://cppreference.com/">)" };
    const std::regex url { "https://([a-z]+)\\.([a-z]{3})" };
    std::smatch parts;
    std::regex_search(html, parts, url);
    for (std::ssub_match const& sub : parts) {
        const std::string s = sub; // (1) implicit conversion
        assert(s == sub.str()); // (2)
        std::cout << s << '\n';
    }
}
