// cplusplus link https://cplusplus.com/reference/iomanip\resetiosflags
// resetiosflags example
#include <iomanip> // std::setiosflags, std::resetiosflags
#include <iostream> // std::cout, std::hex, std::endl

int main()
{
    std::cout << std::hex << std::setiosflags(std::ios::showbase);
    std::cout << 100 << std::endl;
    std::cout << std::resetiosflags(std::ios::showbase) << 100 << std::endl;
    return 0;
}
