// cppreference link https://en.cppreference.com/w/cpp/container/forward_list/push_front
#include <forward_list>
#include <iomanip>
#include <iostream>
#include <string>

int main()
{
    std::forward_list<std::string> letters;

    letters.push_front("abc");
    std::string s { "def" };
    letters.push_front(std::move(s));

    std::cout << "std::forward_list `letters` holds: ";
    for (auto&& e : letters)
        std::cout << std::quoted(e) << ' ';

    std::cout << "\nMoved-from string `s` holds: " << std::quoted(s) << '\n';
}
