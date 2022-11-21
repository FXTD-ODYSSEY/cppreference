// cppreference link https://en.cppreference.com/w/cpp/container/stack/empty
#include <algorithm>
#include <iostream>
#include <stack>

int main()
{
    std::cout << std::boolalpha;

    std::stack<int> container;

    std::cout << "Initially, container.empty(): " << container.empty() << '\n';

    container.push(42);
    std::cout << "After adding elements, container.empty(): " << container.empty() << '\n';
}
