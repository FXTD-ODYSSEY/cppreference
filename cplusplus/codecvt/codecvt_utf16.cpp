// cplusplus link https://cplusplus.com/reference/codecvt\codecvt_utf16
// codecvt_utf16: writing UTF-32 string as UTF-16
#include <codecvt>
#include <fstream>
#include <iostream>
#include <locale>
#include <string>

int main()
{
    std::u32string str(U"\U00004f60\U0000597d"); // ni hao (你好)

    std::locale loc(std::locale(), new std::codecvt_utf16<char32_t>);
    std::basic_ofstream<char32_t> ofs("test.txt");
    ofs.imbue(loc);

    std::cout << "Writing to file (UTF-16)... ";
    ofs << str;
    std::cout << "done!\n";

    return 0;
}
