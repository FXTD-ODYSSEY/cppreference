// cppreference link https://en.cppreference.com/w/cpp/locale/codecvt/%7Ecodecvt
#include <iostream>
#include <locale>
struct Destructible_codecvt : public std::codecvt<wchar_t, char, std::mbstate_t> {
    Destructible_codecvt(std::size_t refs = 0)
        : codecvt(refs)
    {
    }
    // note: the implicit destructor is public
};
int main()
{
    Destructible_codecvt dc;
    // std::codecvt<wchar_t> c;  // compile error: protected destructor
}
