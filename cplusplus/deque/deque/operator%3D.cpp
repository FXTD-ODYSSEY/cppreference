// cplusplus link https://cplusplus.com/reference/deque\deque\operator%3D
// assignment operator with deques
#include <deque>
#include <iostream>

int main()
{
    std::deque<int> first(3); // deque with 3 zero-initialized ints
    std::deque<int> second(5); // deque with 5 zero-initialized ints

    second = first;
    first = std::deque<int>();

    std::cout << "Size of first: " << int(first.size()) << '\n';
    std::cout << "Size of second: " << int(second.size()) << '\n';
    return 0;
}
