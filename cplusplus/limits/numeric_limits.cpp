// cplusplus link https://cplusplus.com/reference/limits\numeric_limits
// numeric_limits example
#include <iostream> // std::cout
#include <limits> // std::numeric_limits

int main()
{
    std::cout << std::boolalpha;
    std::cout << "Minimum value for int: " << std::numeric_limits<int>::min() << '\n';
    std::cout << "Maximum value for int: " << std::numeric_limits<int>::max() << '\n';
    std::cout << "int is signed: " << std::numeric_limits<int>::is_signed << '\n';
    std::cout << "Non-sign bits in int: " << std::numeric_limits<int>::digits << '\n';
    std::cout << "int has infinity: " << std::numeric_limits<int>::has_infinity << '\n';
    return 0;
}
