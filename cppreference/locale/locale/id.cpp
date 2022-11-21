// cppreference link https://en.cppreference.com/w/cpp/locale/locale/id
#include <iostream>
#include <locale>

struct myfacet : std::locale::facet {
    myfacet(std::size_t refs = 0)
        : facet(refs)
    {
    }
    static std::locale::id id;
};

std::locale::id myfacet::id;

int main()
{
    std::locale myloc(std::locale(), new myfacet);
    std::cout << "has_facet<myfacet>(myloc) returns " << std::boolalpha
              << std::has_facet<myfacet>(myloc) << '\n';
}
