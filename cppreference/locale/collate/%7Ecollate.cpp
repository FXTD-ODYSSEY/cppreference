// cppreference link https://en.cppreference.com/w/cpp/locale/collate/%7Ecollate
#include <iostream>
#include <locale>
struct Destructible_collate : public std::collate<wchar_t> {
    Destructible_collate(std::size_t refs = 0)
        : collate(refs)
    {
    }
    // note: the implicit destructor is public
};
int main()
{
    Destructible_collate dc;
    // std::collate<wchar_t> c;  // compile error: protected destructor
}
