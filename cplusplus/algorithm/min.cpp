// cplusplus link https://cplusplus.com/reference/algorithm\min
// min example
#include <algorithm> // std::min
#include <iostream> // std::cout

int main()
{
    std::cout << "min(1,2)==" << std::min(1, 2) << '\n';
    std::cout << "min(2,1)==" << std::min(2, 1) << '\n';
    std::cout << "min('a','z')==" << std::min('a', 'z') << '\n';
    std::cout << "min(3.14,2.72)==" << std::min(3.14, 2.72) << '\n';
    return 0;
}
