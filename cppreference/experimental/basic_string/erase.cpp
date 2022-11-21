// cppreference link https://en.cppreference.com/w/cpp/experimental/basic_string/erase
#include <experimental/string>
#include <iostream>

int main()
{
    std::string data { "$$P$A$S$S$$W$O$R$$D$" };
    std::cout << data << '\n';
    auto crack { '$' };
    std::experimental::erase(data, crack);
    std::cout << data << '\n';
}
