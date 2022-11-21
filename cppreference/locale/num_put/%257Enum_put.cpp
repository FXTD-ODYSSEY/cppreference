// cppreference link https://en.cppreference.com/w/cpp/locale/num_put/%7Enum_put
#include <iostream>
#include <locale>
struct Destructible_num_put : public std::num_put<wchar_t> {
    Destructible_num_put(std::size_t refs = 0)
        : num_put(refs)
    {
    }
    // note: the implicit destructor is public
};
int main()
{
    Destructible_num_put dc;
    // std::num_put<wchar_t> c;  // compile error: protected destructor
}
