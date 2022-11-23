// cplusplus link https://cplusplus.com/reference/ios\ios_base\width
// field width
#include <iostream> // std::cout, std::left

int main()
{
    std::cout << 100 << '\n';
    std::cout.width(10);
    std::cout << 100 << '\n';
    std::cout.fill('x');
    std::cout.width(15);
    std::cout << std::left << 100 << '\n';
    return 0;
}
