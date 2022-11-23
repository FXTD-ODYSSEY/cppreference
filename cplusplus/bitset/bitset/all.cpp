// cplusplus link https://cplusplus.com/reference/bitset\bitset\all
// bitset::all
#include <bitset> // std::bitset
#include <iostream> // std::cin, std::cout, std::boolalpha

int main()
{
    std::bitset<8> foo;

    std::cout << "Please, enter an 8-bit binary number: ";
    std::cin >> foo;

    std::cout << std::boolalpha;
    std::cout << "all: " << foo.all() << '\n';
    std::cout << "any: " << foo.any() << '\n';
    std::cout << "none: " << foo.none() << '\n';

    return 0;
}
