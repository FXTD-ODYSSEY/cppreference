// cplusplus link https://cplusplus.com/reference/ios\noshowpos
// modify showpos flag
#include <iostream> // std::cout, std::showpos, std::noshowpos

int main()
{
    int p = 1;
    int z = 0;
    int n = -1;
    std::cout << std::showpos << p << '\t' << z << '\t' << n << '\n';
    std::cout << std::noshowpos << p << '\t' << z << '\t' << n << '\n';
    return 0;
}
