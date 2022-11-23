// cplusplus link https://cplusplus.com/reference/locale\wstring_convert\from_bytes
// converting from UTF-8 to UTF-32
#include <codecvt> // std::codecvt_utf8
#include <cstdint> // std::uint_least32_t
#include <iostream> // std::cout, std::hex
#include <locale> // std::wstring_convert
#include <string> // std::string, std::u32string

int main()
{
    std::string str8("en espa\xc3\xb1ol"); // UTF-8 for "en español"

    std::wstring_convert<std::codecvt_utf8<char32_t>, char32_t> cv;

    std::u32string str32 = cv.from_bytes(str8);

    std::cout << std::hex;

    for (char32_t c : str32) {
        std::cout << '[' << std::uint_least32_t(c) << ']';
    }
    std::cout << '\n';

    return 0;
}
