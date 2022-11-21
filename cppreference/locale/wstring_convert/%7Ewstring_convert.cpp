// cppreference link https://en.cppreference.com/w/cpp/locale/wstring_convert/%7Ewstring_convert
#include <codecvt>
#include <locale>
#include <utility>

// utility wrapper to adapt locale-bound facets for wstring/wbuffer convert
template <class Facet>
struct deletable_facet : Facet {
    template <class... Args>
    deletable_facet(Args&&... args)
        : Facet(std::forward<Args>(args)...)
    {
    }
    ~deletable_facet() { }
};

int main()
{
    // GB18030 / UCS4 conversion, using locale-based facet directly
    // typedef std::codecvt_byname<char32_t, char, std::mbstate_t> gbfacet_t;
    // Compiler error: "calling a protected destructor of codecvt_byname<> in ~wstring_convert"
    // std::wstring_convert<gbfacet_t> gbto32(new gbfacet_t("zh_CN.gb18030"));

    // GB18030 / UCS4 conversion facet using a facet with public destructor
    typedef deletable_facet<std::codecvt_byname<char32_t, char, std::mbstate_t>> gbfacet_t;
    std::wstring_convert<gbfacet_t> gbto32(new gbfacet_t("zh_CN.gb18030"));
} // destructor called here
