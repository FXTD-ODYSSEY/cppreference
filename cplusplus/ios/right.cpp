// cplusplus link https://cplusplus.com/reference/ios\right
// modify adjustfield using manipulators
#include <iostream> // std::cout, std::internal, std::left, std::right

int main()
{
    int n = -77;
    std::cout.width(6);
    std::cout << std::internal << n << '\n';
    std::cout.width(6);
    std::cout << std::left << n << '\n';
    std::cout.width(6);
    std::cout << std::right << n << '\n';
    return 0;
}
