// cppreference link https://en.cppreference.com/w/cpp/locale/codecvt/max_length
#include <codecvt>
#include <iostream>
#include <locale>

int main()
{
    std::cout << "In codecvt_utf8, the longest multibyte character is "
              << std::codecvt_utf8<wchar_t>().max_length() << " bytes long\n";

    std::cout << "In header-consuming codecvt_utf8, the longest multibyte character is "
              << std::codecvt_utf8<wchar_t,
                     0x10ffff,
                     std::consume_header>()
                     .max_length()
              << " bytes long\n";

    std::cout << "In this system's en_US.utf8, the longest multibyte character is "
              << std::use_facet<std::codecvt<wchar_t, char, std::mbstate_t>>(
                     std::locale("en_US.utf8"))
                     .max_length()
              << " bytes long\n";

    std::cout << "In this system's zh_CN.gb18030, the longest multibyte character is "
              << std::use_facet<std::codecvt<wchar_t, char, std::mbstate_t>>(
                     std::locale("zh_CN.gb18030"))
                     .max_length()
              << " bytes long\n";
}
