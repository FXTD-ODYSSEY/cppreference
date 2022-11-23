// cplusplus link https://cplusplus.com/reference/tuple\tuple\operators
// tuple relational operators
#include <iostream> // std::cout
#include <tuple> // std::tuple

int main()
{
    std::tuple<int, char> a(10, 'x');
    std::tuple<char, char> b(10, 'x');
    std::tuple<char, char> c(10, 'y');

    if (a == b)
        std::cout << "a and b are equal\n";
    if (b != c)
        std::cout << "b and c are not equal\n";
    if (b < c)
        std::cout << "b is less than c\n";
    if (c > a)
        std::cout << "c is greater than a\n";
    if (a <= c)
        std::cout << "a is less than or equal to c\n";
    if (c >= b)
        std::cout << "c is greater than or equal to b\n";

    return 0;
}
