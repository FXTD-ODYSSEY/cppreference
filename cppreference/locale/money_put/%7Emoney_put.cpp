// cppreference link https://en.cppreference.com/w/cpp/locale/money_put/%7Emoney_put
#include <iostream>
#include <locale>
struct Destructible_money_put : public std::money_put<wchar_t> {
    Destructible_money_put(std::size_t refs = 0)
        : money_put(refs)
    {
    }
    // note: the implicit destructor is public
};
int main()
{
    Destructible_money_put dc;
    // std::money_put<wchar_t> c;  // compile error: protected destructor
}
