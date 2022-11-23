// cplusplus link https://cplusplus.com/reference/locale\ctype\narrow
// ctype::narrow example
#include <iostream> // std::cout, std::getline, std::wcin
#include <locale> // std::locale, std::ctype, std::use_facet
#include <string> // std::wstring

int main()
{
    std::locale loc;
    std::wstring yourname;

    std::cout << "Please enter your name: ";
    std::getline(std::wcin, yourname);
    std::wstring::size_type length = yourname.length();

    std::cout << "The first (narrow) character in your name is: ";
    std::cout << std::use_facet<std::ctype<wchar_t>>(loc).narrow(yourname[0], '?');
    std::cout << '\n';

    std::cout << "The narrow transformation of your name is: ";
    char* pc = new char[length + 1];
    std::use_facet<std::ctype<wchar_t>>(loc).narrow(yourname.c_str(), yourname.c_str() + length + 1, '?', pc);
    std::cout << pc << '\n';

    return 0;
}
