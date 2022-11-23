// cplusplus link https://cplusplus.com/reference/ios\boolalpha
// modify boolalpha flag
#include <iostream> // std::cout, std::boolalpha, std::noboolalpha

int main()
{
    bool b = true;
    std::cout << std::boolalpha << b << '\n';
    std::cout << std::noboolalpha << b << '\n';
    return 0;
}
