// cppreference link https://en.cppreference.com/w/cpp/locale/wstring_convert/from_bytes
#include <codecvt>
#include <iostream>
#include <locale>
#include <string>

int main()
{
    std::string utf8 = u8"z\u00df\u6c34\U0001d10b"; // or u8"zß水𝄋"
                                                    // or "\x7a\xc3\x9f\xe6\xb0\xb4\xf0\x9d\x84\x8b";

    // the UTF-8 / UTF-16 standard conversion facet
    std::u16string utf16 = std::wstring_convert<std::codecvt_utf8_utf16<char16_t>, char16_t> {}.from_bytes(utf8.data());
    std::cout << "UTF16 conversion produced " << utf16.size() << " code units:\n";
    for (char16_t c : utf16)
        std::cout << std::hex << std::showbase << c << '\n';

    // the UTF-8 / UTF-32 standard conversion facet
    std::u32string utf32 = std::wstring_convert<std::codecvt_utf8<char32_t>, char32_t> {}.from_bytes(utf8);
    std::cout << "UTF32 conversion produced " << std::dec << utf32.size() << " code units:\n";
    for (char32_t c : utf32)
        std::cout << std::hex << std::showbase << c << '\n';
}
