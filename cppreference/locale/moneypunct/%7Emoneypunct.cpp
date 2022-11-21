// cppreference link https://en.cppreference.com/w/cpp/locale/moneypunct/%7Emoneypunct
#include <iostream>
#include <locale>
struct Destructible_moneypunct : public std::moneypunct<wchar_t> {
    Destructible_moneypunct(std::size_t refs = 0)
        : moneypunct(refs)
    {
    }
    // note: the implicit destructor is public
};
int main()
{
    Destructible_moneypunct dc;
    // std::moneypunct<wchar_t> c;  // compile error: protected destructor
}
