// cplusplus link https://cplusplus.com/reference/algorithm\all_of
// all_of example
#include <algorithm> // std::all_of
#include <array> // std::array
#include <iostream> // std::cout

int main()
{
    std::array<int, 8> foo = { 3, 5, 7, 11, 13, 17, 19, 23 };

    if (std::all_of(foo.begin(), foo.end(), [](int i) { return i % 2; }))
        std::cout << "All the elements are odd numbers.\n";

    return 0;
}
