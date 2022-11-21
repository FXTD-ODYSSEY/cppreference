// cppreference link https://en.cppreference.com/w/cpp/types/is_compound
#include <iostream>
#include <type_traits>

int main()
{
    class cls { };
    std::cout << (std::is_compound<cls>::value
            ? "`cls` is compound"
            : "`cls` is not a compound")
              << '\n';
    std::cout << (std::is_compound_v<int>
            ? "`int` is compound"
            : "`int` is not a compound")
              << '\n';
}
