// cppreference link https://en.cppreference.com/w/cpp/container/list/resize
#include <iostream>
#include <list>

int main()
{
    std::list<int> c = { 1, 2, 3 };
    std::cout << "The list holds: ";
    for (const auto& el : c)
        std::cout << el << ' ';
    std::cout << '\n';

    c.resize(5);
    std::cout << "After resize up to 5: ";
    for (const auto& el : c)
        std::cout << el << ' ';
    std::cout << '\n';

    c.resize(2);
    std::cout << "After resize down to 2: ";
    for (const auto& el : c)
        std::cout << el << ' ';
    std::cout << '\n';

    c.resize(6, 4);
    std::cout << "After resize up to 6 (initializer = 4): ";
    for (const auto& el : c)
        std::cout << el << ' ';
    std::cout << '\n';
}
