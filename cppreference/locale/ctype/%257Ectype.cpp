// cppreference link https://en.cppreference.com/w/cpp/locale/ctype/%7Ectype
#include <iostream>
#include <locale>
struct Destructible_ctype : public std::ctype<wchar_t> {
    Destructible_ctype(std::size_t refs = 0)
        : ctype(refs)
    {
    }
    // note: the implicit destructor is public
};
int main()
{
    Destructible_ctype dc;
    // std::ctype<wchar_t> c;  // compile error: protected destructor
}
