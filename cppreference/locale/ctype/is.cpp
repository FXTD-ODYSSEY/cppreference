// cppreference link https://en.cppreference.com/w/cpp/locale/ctype/is
#include <iostream>
#include <locale>
#include <utility>
#include <vector>

// utility wrapper to make locale-bound facets destructible
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
    // classify a single character using the default locale
    auto& f = std::use_facet<std::ctype<char>>(std::locale());
    char c = '0';
    if (f.is(std::ctype_base::digit, c)) // or isdigit(c, locale());
    {
        std::cout << "'" << c << "' is a digit\n";
    }

    // classify every character in a string using a named locale
    deletable_facet<std::ctype_byname<wchar_t>> f2("en_US.utf8");
    std::wstring str = L"z\u00df\u6c34\U0001d10b";
    std::vector<std::ctype_base::mask> vec(str.size());
    f2.is(&str[0], &str[0] + str.size(), &vec[0]);

    for (std::size_t n = 0; n < str.size(); ++n) {
        std::cout << std::hex << "U+" << str[n] << " is: ";
        if (vec[n] & std::ctype_base::alnum)
            std::cout << " alnum ";
        if (vec[n] & std::ctype_base::punct)
            std::cout << " punct ";
        std::cout << '\n';
    }
}
