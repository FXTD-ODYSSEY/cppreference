// cplusplus link https://cplusplus.com/reference/algorithm\minmax_element
// minmax_element
#include <algorithm> // std::minmax_element
#include <array> // std::array
#include <iostream> // std::cout

int main()
{
    std::array<int, 7> foo { 3, 7, 2, 9, 5, 8, 6 };

    auto result = std::minmax_element(foo.begin(), foo.end());

    // print result:
    std::cout << "min is " << *result.first;
    std::cout << ", at position " << (result.first - foo.begin()) << '\n';
    std::cout << "max is " << *result.second;
    std::cout << ", at position " << (result.second - foo.begin()) << '\n';

    return 0;
}
