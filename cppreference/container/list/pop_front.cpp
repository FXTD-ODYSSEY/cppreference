// cppreference link https://en.cppreference.com/w/cpp/container/list/pop_front
#include <iostream>
#include <list>

int main()
{
    std::list<char> chars { 'A', 'B', 'C', 'D' };

    for (; !chars.empty(); chars.pop_front()) {
        std::cout << "chars.front(): '" << chars.front() << "'\n";
    }
}
