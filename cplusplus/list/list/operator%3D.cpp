// cplusplus link https://cplusplus.com/reference/list\list\operator%3D
// assignment operator with lists
#include <iostream>
#include <list>

int main()
{
    std::list<int> first(3); // list of 3 zero-initialized ints
    std::list<int> second(5); // list of 5 zero-initialized ints

    second = first;
    first = std::list<int>();

    std::cout << "Size of first: " << int(first.size()) << '\n';
    std::cout << "Size of second: " << int(second.size()) << '\n';
    return 0;
}
