// cppreference link https://en.cppreference.com/w/cpp/locale/has_facet
#include <iostream>
#include <locale>

// minimal custom facet
struct myfacet : public std::locale::facet {
    static std::locale::id id;
};

std::locale::id myfacet::id;

int main()
{
    // loc is a "C" locale with myfacet added
    std::locale loc(std::locale::classic(), new myfacet);
    std::cout << std::boolalpha
              << "Can loc classify chars? "
              << std::has_facet<std::ctype<char>>(loc) << '\n'
              << "Can loc classify char32_t? "
              << std::has_facet<std::ctype<char32_t>>(loc) << '\n'
              << "Does loc implement myfacet? "
              << std::has_facet<myfacet>(loc) << '\n';
}
