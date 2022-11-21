// cppreference link https://en.cppreference.com/w/cpp/container/deque/push_back
#include <deque>
#include <iomanip>
#include <iostream>
#include <string>

int main()
{
    std::deque<std::string> letters;

    letters.push_back("abc");
    std::string s { "def" };
    letters.push_back(std::move(s));

    std::cout << "std::deque `letters` holds: ";
    for (auto&& e : letters)
        std::cout << std::quoted(e) << ' ';

    std::cout << "\nMoved-from string `s` holds: " << std::quoted(s) << '\n';
}
