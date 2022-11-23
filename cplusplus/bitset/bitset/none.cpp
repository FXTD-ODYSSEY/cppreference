// cplusplus link https://cplusplus.com/reference/bitset\bitset\none
// bitset::none
#include <bitset> // std::bitset
#include <iostream> // std::cin, std::cout

int main()
{
    std::bitset<16> foo;

    std::cout << "Please, enter a binary number: ";
    std::cin >> foo;

    if (foo.none())
        std::cout << foo << " has no bits set.\n";
    else
        std::cout << foo << " has " << foo.count() << " bits set.\n";

    return 0;
}
