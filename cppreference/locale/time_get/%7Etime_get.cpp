// cppreference link https://en.cppreference.com/w/cpp/locale/time_get/%7Etime_get
#include <iostream>
#include <locale>
struct Destructible_time_get : public std::time_get<wchar_t> {
    Destructible_time_get(std::size_t refs = 0)
        : time_get(refs)
    {
    }
    // note: the implicit destructor is public
};
int main()
{
    Destructible_time_get dc;
    // std::time_get<wchar_t> c;  // compile error: protected destructor
}
