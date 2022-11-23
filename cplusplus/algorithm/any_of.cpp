// cplusplus link https://cplusplus.com/reference/algorithm\any_of
// any_of example
#include <algorithm> // std::any_of
#include <array> // std::array
#include <iostream> // std::cout

int main()
{
    std::array<int, 7> foo = { 0, 1, -1, 3, -3, 5, -5 };

    if (std::any_of(foo.begin(), foo.end(), [](int i) { return i < 0; }))
        std::cout << "There are negative elements in the range.\n";

    return 0;
}
