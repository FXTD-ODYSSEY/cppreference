// cplusplus link https://cplusplus.com/reference/iomanip\put_money
// put_money manipulator example
#include <iomanip> // std::put_money
#include <iostream> // std::cout

int main()
{
    std::cout << "Price:" << std::put_money(10.50L) << '\n';
    return 0;
}
