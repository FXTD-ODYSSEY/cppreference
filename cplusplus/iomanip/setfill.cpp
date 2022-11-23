// cplusplus link https://cplusplus.com/reference/iomanip\setfill
// setfill example
#include <iomanip> // std::setfill, std::setw
#include <iostream> // std::cout, std::endl

int main()
{
    std::cout << std::setfill('x') << std::setw(10);
    std::cout << 77 << std::endl;
    return 0;
}
