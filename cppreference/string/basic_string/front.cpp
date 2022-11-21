// cppreference link https://en.cppreference.com/w/cpp/string/basic_string/front
#include <iostream>
#include <string>

int main()
{
    {
        std::string s("Exemplary");
        char& f = s.front();
        f = 'e';
        std::cout << s << '\n'; // "exemplary"
    }

    {
        std::string const c("Exemplary");
        char const& f = c.front();
        std::cout << &f << '\n'; // "Exemplary"
    }
}
