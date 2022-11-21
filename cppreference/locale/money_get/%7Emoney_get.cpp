// cppreference link https://en.cppreference.com/w/cpp/locale/money_get/%7Emoney_get
#include <iostream>
#include <locale>
struct Destructible_money_get : public std::money_get<wchar_t> {
    Destructible_money_get(std::size_t refs = 0)
        : money_get(refs)
    {
    }
    // note: the implicit destructor is public
};
int main()
{
    Destructible_money_get dc;
    // std::money_get<wchar_t> c;  // compile error: protected destructor
}
