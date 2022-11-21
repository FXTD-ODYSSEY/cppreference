// cppreference link https://en.cppreference.com/w/cpp/locale/time_put/%7Etime_put
#include <iostream>
#include <locale>
struct Destructible_time_put : public std::time_put<wchar_t> {
    Destructible_time_put(std::size_t refs = 0)
        : time_put(refs)
    {
    }
    // note: the implicit destructor is public
};
int main()
{
    Destructible_time_put dc;
    // std::time_put<wchar_t> c;  // compile error: protected destructor
}
