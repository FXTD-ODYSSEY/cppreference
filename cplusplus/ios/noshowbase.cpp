// cplusplus link https://cplusplus.com/reference/ios\noshowbase
// modify showbase flag
#include <iostream> // std::cout, std::showbase, std::noshowbase

int main()
{
    int n = 20;
    std::cout << std::hex << std::showbase << n << '\n';
    std::cout << std::hex << std::noshowbase << n << '\n';
    return 0;
}
