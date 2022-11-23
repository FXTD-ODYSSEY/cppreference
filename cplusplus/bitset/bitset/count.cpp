// cplusplus link https://cplusplus.com/reference/bitset\bitset\count
// bitset::count
#include <bitset> // std::bitset
#include <iostream> // std::cout
#include <string> // std::string

int main()
{
    std::bitset<8> foo(std::string("10110011"));

    std::cout << foo << " has ";
    std::cout << foo.count() << " ones and ";
    std::cout << (foo.size() - foo.count()) << " zeros.\n";

    return 0;
}
