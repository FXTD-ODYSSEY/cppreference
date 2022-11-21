// cppreference link https://en.cppreference.com/w/cpp/locale/wstring_convert/wstring_convert
#include <codecvt>
#include <locale>
#include <utility>

// utility wrapper to adapt locale-bound facets for wstring/wbuffer convert
template <class Facet>
struct deletable_facet : Facet {
    using Facet::Facet; // inherit constructors
    ~deletable_facet() { }
};

int main()
{
    // UTF-16le / UCS4 conversion
    std::wstring_convert<
        std::codecvt_utf16<char32_t, 0x10ffff, std::little_endian>>
        u16to32;

    // UTF-8 / wide string conversion with custom messages
    std::wstring_convert<std::codecvt_utf8<wchar_t>> u8towide("Error!", L"Error!");

    // GB18030 / wide string conversion facet
    typedef deletable_facet<std::codecvt_byname<wchar_t, char, std::mbstate_t>> F;
    std::wstring_convert<F> gbtowide(new F("zh_CN.gb18030"));
}
