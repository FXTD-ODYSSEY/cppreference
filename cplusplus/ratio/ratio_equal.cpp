// cplusplus link https://cplusplus.com/reference/ratio\ratio_equal
// ratio_equal example
#include <iostream>
#include <ratio>

int main()
{
    typedef std::ratio<1, 2> one_half;
    typedef std::ratio<2, 4> two_fourths;

    std::cout << "1/2 == 2/4 ? " << std::boolalpha;
    std::cout << std::ratio_equal<one_half, two_fourths>::value << std::endl;

    return 0;
}
