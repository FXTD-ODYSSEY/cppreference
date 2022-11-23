// cplusplus link https://cplusplus.com/reference/ios\ios\fill
// using the fill character
#include <iostream> // std::cout

int main()
{
    char prev;

    std::cout.width(10);
    std::cout << 40 << '\n';

    prev = std::cout.fill('x');
    std::cout.width(10);
    std::cout << 40 << '\n';

    std::cout.fill(prev);

    return 0;
}
