// cplusplus link https://cplusplus.com/reference/ios\ios_base\setf
// modifying flags with setf/unsetf
#include <iostream> // std::cout, std::ios

int main()
{
    std::cout.setf(std::ios::hex, std::ios::basefield); // set hex as the basefield
    std::cout.setf(std::ios::showbase); // activate showbase
    std::cout << 100 << '\n';
    std::cout.unsetf(std::ios::showbase); // deactivate showbase
    std::cout << 100 << '\n';
    return 0;
}
