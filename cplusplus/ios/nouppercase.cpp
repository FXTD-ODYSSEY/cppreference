// cplusplus link https://cplusplus.com/reference/ios\nouppercase
// modify uppercase flag
#include <iostream> // std::cout, std::showbase, std::hex
    // std::uppercase, std::nouppercase
int main()
{
    std::cout << std::showbase << std::hex;
    std::cout << std::uppercase << 77 << '\n';
    std::cout << std::nouppercase << 77 << '\n';
    return 0;
}
