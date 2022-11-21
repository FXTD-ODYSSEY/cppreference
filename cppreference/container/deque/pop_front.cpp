// cppreference link https://en.cppreference.com/w/cpp/container/deque/pop_front
#include <deque>
#include <iostream>

int main()
{
    std::deque<char> chars { 'A', 'B', 'C', 'D' };

    for (; !chars.empty(); chars.pop_front()) {
        std::cout << "chars.front(): '" << chars.front() << "'\n";
    }
}
