// cplusplus link https://cplusplus.com/reference/algorithm\swap
// swap algorithm example (C++98)
#include <algorithm> // std::swap
#include <iostream> // std::cout
#include <vector> // std::vector

int main()
{

    int x = 10, y = 20; // x:10 y:20
    std::swap(x, y); // x:20 y:10

    std::vector<int> foo(4, x), bar(6, y); // foo:4x20 bar:6x10
    std::swap(foo, bar); // foo:6x10 bar:4x20

    std::cout << "foo contains:";
    for (std::vector<int>::iterator it = foo.begin(); it != foo.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';

    return 0;
}
