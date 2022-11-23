// cplusplus link https://cplusplus.com/reference/ratio\ratio_greater
// ratio_greater example
#include <iostream>
#include <ratio>

int main()
{
    typedef std::ratio<1, 3> one_third;
    typedef std::ratio<1, 2> one_half;

    std::cout << "1/3 > 1/2 ? " << std::boolalpha;
    std::cout << std::ratio_greater<one_third, one_half>::value << std::endl;

    return 0;
}
