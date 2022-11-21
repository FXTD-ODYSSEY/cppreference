// cppreference link https://en.cppreference.com/w/cpp/regex/regex_token_iterator
#include <algorithm>
#include <fstream>
#include <iostream>
#include <iterator>
#include <regex>

int main()
{
    // Tokenization (non-matched fragments)
    // Note that regex is matched only two times; when the third value is obtained
    // the iterator is a suffix iterator.
    const std::string text = "Quick brown fox.";
    const std::regex ws_re("\\s+"); // whitespace
    std::copy(std::sregex_token_iterator(text.begin(), text.end(), ws_re, -1),
        std::sregex_token_iterator(),
        std::ostream_iterator<std::string>(std::cout, "\n"));

    std::cout << '\n';

    // Iterating the first submatches
    const std::string html = R"(<p><a href="http://google.com">google</a> )"
                             R"(< a HREF ="http://cppreference.com">cppreference</a>\n</p>)";
    const std::regex url_re(R"!!(<\s*A\s+[^>]*href\s*=\s*"([^"]*)")!!", std::regex::icase);
    std::copy(std::sregex_token_iterator(html.begin(), html.end(), url_re, 1),
        std::sregex_token_iterator(),
        std::ostream_iterator<std::string>(std::cout, "\n"));
}
