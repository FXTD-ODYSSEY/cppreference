// cppreference link https://en.cppreference.com/w/cpp/language/character_literal
#include <cstdint>
#include <iomanip>
#include <iostream>
#include <string_view>

template <typename CharT>
void dump(std::string_view s, const CharT c)
{
    const uint8_t* data { reinterpret_cast<const uint8_t*>(&c) };

    std::cout << s << " \t" << std::hex
              << std::uppercase << std::setfill('0');

    for (auto i { 0U }; i != sizeof(CharT); ++i)
        std::cout << std::setw(2) << static_cast<unsigned>(data[i]) << ' ';

    std::cout << '\n';
}

void print(std::string_view str = "") { std::cout << str << '\n'; }

int main()
{
    print("Ordinary character literals:");
    char c1 = 'a';
    dump("'a'", c1);
    char c2 = '\x2a';
    dump("'*'", c2);

    print("\n"
          "Ordinary multi-character literals:");
    int mc1 = 'ab';
    dump("'ab'", mc1); // implementation-defined
    int mc2 = 'abc';
    dump("'abc'", mc2); // implementation-defined

    print("\n"
          "Non-encodable character literals:");
    int ne1 = 'ยข';
    dump("'ยข'", ne1); // implementation-defined
    int ne2 = '็ซ';
    dump("'็ซ'", ne2); // implementation-defined
    int ne3 = '๐';
    dump("'๐'", ne3); // implementation-defined

    print("\n"
          "UTF-8 character literals:");
    char8_t C1 = u8'a';
    dump("u8'a'", C1);
    //  char8_t C2 = u8'ยข'; dump("u8'ยข'", C2);   // error: ยข maps to two UTF-8 code units
    //  char8_t C3 = u8'็ซ'; dump("u8'็ซ'", C3); // error: ็ซ maps to three UTF-8 code units
    //  char8_t C4 = u8'๐'; dump("u8'๐'", C4); // error: ๐ maps to four UTF-8 code units

    print("\n"
          "UTF-16 character literals:");
    char16_t uc1 = u'a';
    dump("u'a'", uc1);
    char16_t uc2 = u'ยข';
    dump("u'ยข'", uc2);
    char16_t uc3 = u'็ซ';
    dump("u'็ซ'", uc3);
    //  char16_t uc4 = u'๐'; dump("u'๐'", uc4); // error: ๐ maps to two UTF-16 code units

    print("\n"
          "UTF-32 character literals:");
    char32_t Uc1 = U'a';
    dump("U'a'", Uc1);
    char32_t Uc2 = U'ยข';
    dump("U'ยข'", Uc2);
    char32_t Uc3 = U'็ซ';
    dump("U'็ซ'", Uc3);
    char32_t Uc4 = U'๐';
    dump("U'๐'", Uc4);

    print("\n"
          "Wide character literals:");
    wchar_t wc1 = L'a';
    dump("L'a'", wc1);
    wchar_t wc2 = L'ยข';
    dump("L'ยข'", wc2);
    wchar_t wc3 = L'็ซ';
    dump("L'็ซ'", wc3);
    wchar_t wc4 = L'๐';
    dump("L'๐'", wc4); // unsupported on Windows since C++23
}
