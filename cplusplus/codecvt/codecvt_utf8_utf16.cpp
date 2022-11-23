// cplusplus link https://cplusplus.com/reference/codecvt\codecvt_utf8_utf16
// codecvt_utf8_utf16 example
#include <codecvt>
#include <iostream>
#include <locale>
#include <string>

int main()
{
    std::wstring_convert<std::codecvt_utf8_utf16<char16_t>, char16_t> conversion;
    std::string mbs = conversion.to_bytes(u"\u4f60\u597d"); // ni hao (你好)

    // print out hex value of each byte:
    std::cout << std::hex;
    for (int i = 0; i < mbs.length(); ++i)
        std::cout << int(unsigned char(mbs[i])) << ' ';
    std::cout << '\n';

    return 0;
}
