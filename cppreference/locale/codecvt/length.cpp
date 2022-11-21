// cppreference link https://en.cppreference.com/w/cpp/locale/codecvt/length
#include <iostream>
#include <locale>
#include <string>

int main()
{
    using facet_type = std::codecvt<char16_t, char, std::mbstate_t>;

    // narrow multibyte encoding
    std::string s = "z\u00df\u6c34\U0001d10b"; // or u8"zß水𝄋"
                                               // or "\x7a\xc3\x9f\xe6\xb0\xb4\xf0\x9d\x84\x8b";

    std::setlocale(LC_ALL, "en_US.UTF-8");
    facet_type const& codecvt_facet = std::use_facet<facet_type>(std::locale());
    std::mbstate_t mb = std::mbstate_t();
    std::cout << "Only the first "
              << codecvt_facet.length(mb, s.data(), s.data() + s.size(), 2)
              << " bytes out of " << s.size() << " would be consumed"
                                                 " to produce the first 2 characters\n";
}
