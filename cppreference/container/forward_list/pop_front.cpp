// cppreference link https://en.cppreference.com/w/cpp/container/forward_list/pop_front
#include <forward_list>
#include <iostream>

int main()
{
    std::forward_list<char> chars { 'A', 'B', 'C', 'D' };

    for (; !chars.empty(); chars.pop_front()) {
        std::cout << "chars.front(): '" << chars.front() << "'\n";
    }
}
