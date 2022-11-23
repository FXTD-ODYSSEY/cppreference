// cplusplus link https://cplusplus.com/reference/locale\wstring_convert\to_bytes
// converting from UTF-16 to UTF-8
#include <codecvt> // std::codecvt_utf8_utf16
#include <iostream> // std::cout, std::hex
#include <locale> // std::wstring_convert
#include <string> // std::string, std::u16string

int main()
{
    std::u16string str16(u"\u3084\u3042"); // UTF-16 for YAA (やあ)

    std::wstring_convert<std::codecvt_utf8_utf16<char16_t>, char16_t> cv;

    std::string str8 = cv.to_bytes(str16);

    std::cout << std::hex;

    std::cout << "UTF-8: ";
    for (char c : str8)
        std::cout << '[' << int(static_cast<unsigned char>(c)) << ']';
    std::cout << '\n';

    return 0;
}
