// cppreference link https://en.cppreference.com/w/cpp/locale/wstring_convert/converted
#include <codecvt>
#include <iostream>
#include <locale>
#include <string>
int main()
{
    std::string utf8 = u8"z\u00df\u6c34\U0001d10b"; // or u8"zß水𝄋"
                                                    // or "\x7a\xc3\x9f\xe6\xb0\xb4\xf0\x9d\x84\x8b";
    std::cout << "original UTF-8 string size: " << utf8.size() << '\n';

    // the UTF-8 - UTF-32 standard conversion facet
    std::wstring_convert<std::codecvt_utf8<char32_t>, char32_t> cvt;

    // UTF-8 to UTF-32
    std::u32string utf32 = cvt.from_bytes(utf8);
    std::cout << "UTF-32 string size: " << utf32.size() << '\n';
    std::cout << "converted() == " << cvt.converted() << '\n';
    // UTF-32 to UTF-8
    utf8 = cvt.to_bytes(utf32);
    std::cout << "new UTF-8 string size: " << utf8.size() << '\n';
    std::cout << "converted() == " << cvt.converted() << '\n';
}
