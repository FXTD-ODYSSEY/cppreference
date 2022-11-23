// cplusplus link https://cplusplus.com/reference/iomanip\setbase
// setbase example
#include <iomanip> // std::setbase
#include <iostream> // std::cout, std::endl

int main()
{
    std::cout << std::setbase(16);
    std::cout << 110 << std::endl;
    return 0;
}
