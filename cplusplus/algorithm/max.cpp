// cplusplus link https://cplusplus.com/reference/algorithm\max
// max example
#include <algorithm> // std::max
#include <iostream> // std::cout

int main()
{
    std::cout << "max(1,2)==" << std::max(1, 2) << '\n';
    std::cout << "max(2,1)==" << std::max(2, 1) << '\n';
    std::cout << "max('a','z')==" << std::max('a', 'z') << '\n';
    std::cout << "max(3.14,2.73)==" << std::max(3.14, 2.73) << '\n';
    return 0;
}
