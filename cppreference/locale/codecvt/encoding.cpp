// cppreference link https://en.cppreference.com/w/cpp/locale/codecvt/encoding
#include <iostream>
#include <locale>

int main()
{
    std::cout << "en_US.utf8 is a variable-length encoding, encoding() returns "
              << std::use_facet<std::codecvt<wchar_t, char, std::mbstate_t>>(
                     std::locale("en_US.utf8"))
                     .encoding()
              << '\n';

    std::cout << "zh_CN.gb18030 is also variable-length, encoding() == "
              << std::use_facet<std::codecvt<wchar_t, char, std::mbstate_t>>(
                     std::locale("zh_CN.gb18030"))
                     .encoding()
              << '\n';

    std::cout << "ru_RU.koi8r is a single-byte encoding encoding() == "
              << std::use_facet<std::codecvt<wchar_t, char, std::mbstate_t>>(
                     std::locale("ru_RU.koi8r"))
                     .encoding()
              << '\n';
}
