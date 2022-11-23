// cplusplus link https://cplusplus.com/reference/utility\piecewise_construct
// piecewise_construct example
#include <iostream> // std::cout
#include <string> // std::string
#include <tuple> // std::forward_as_tuple
#include <utility> // std::pair, std::piecewise_construct
#include <vector> // std::vector

int main()
{
    std::pair<std::string, std::vector<int>>
        foo(
            std::piecewise_construct,
            std::forward_as_tuple("test"),
            std::forward_as_tuple(3, 10));
    std::cout << "foo.first: " << foo.first << '\n';
    std::cout << "foo.second:";
    for (int& x : foo.second)
        std::cout << ' ' << x;
    std::cout << '\n';

    return 0;
}
