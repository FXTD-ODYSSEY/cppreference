// cppreference link https://en.cppreference.com/w/cpp/container/deque/clear
#include <algorithm>
#include <deque>
#include <iostream>

int main()
{
    std::deque<int> container { 1, 2, 3 };

    auto print = [](const int& n) { std::cout << " " << n; };

    std::cout << "Before clear:";
    std::for_each(container.begin(), container.end(), print);
    std::cout << "\nSize=" << container.size() << '\n';

    std::cout << "Clear\n";
    container.clear();

    std::cout << "After clear:";
    std::for_each(container.begin(), container.end(), print);
    std::cout << "\nSize=" << container.size() << '\n';
}
