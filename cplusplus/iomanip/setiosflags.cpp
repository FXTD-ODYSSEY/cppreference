// cplusplus link https://cplusplus.com/reference/iomanip\setiosflags
// setiosflags example
#include <iomanip> // std::setiosflags
#include <iostream> // std::cout, std::hex, std::endl

int main()
{
    std::cout << std::hex;
    std::cout << std::setiosflags(std::ios::showbase | std::ios::uppercase);
    std::cout << 100 << std::endl;
    return 0;
}
