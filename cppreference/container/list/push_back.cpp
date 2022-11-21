// cppreference link https://en.cppreference.com/w/cpp/container/list/push_back
#include <iomanip>
#include <iostream>
#include <list>
#include <string>

int main()
{
    std::list<std::string> letters;

    letters.push_back("abc");
    std::string s { "def" };
    letters.push_back(std::move(s));

    std::cout << "std::list `letters` holds: ";
    for (auto&& e : letters)
        std::cout << std::quoted(e) << ' ';

    std::cout << "\nMoved-from string `s` holds: " << std::quoted(s) << '\n';
}
