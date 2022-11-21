// cppreference link https://en.cppreference.com/w/cpp/locale/messages/%7Emessages
#include <iostream>
#include <locale>
struct Destructible_messages : public std::messages<wchar_t> {
    Destructible_messages(std::size_t refs = 0)
        : messages(refs)
    {
    }
    // note: the implicit destructor is public
};
int main()
{
    Destructible_messages dc;
    // std::messages<wchar_t> c;  // compile error: protected destructor
}
