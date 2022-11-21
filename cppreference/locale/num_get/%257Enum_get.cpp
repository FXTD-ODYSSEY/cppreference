// cppreference link https://en.cppreference.com/w/cpp/locale/num_get/%7Enum_get
#include <iostream>
#include <locale>
struct Destructible_num_get : public std::num_get<wchar_t> {
    Destructible_num_get(std::size_t refs = 0)
        : num_get(refs)
    {
    }
    // note: the implicit destructor is public
};
int main()
{
    Destructible_num_get dc;
    // std::num_get<wchar_t> c;  // compile error: protected destructor
}
