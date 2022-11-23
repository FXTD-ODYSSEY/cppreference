// cplusplus link https://cplusplus.com/reference/bitset\bitset\size
// bitset::size
#include <bitset> // std::bitset
#include <iostream> // std::cout

int main()
{
    std::bitset<8> foo;
    std::bitset<4> bar;

    std::cout << "foo.size() is " << foo.size() << '\n';
    std::cout << "bar.size() is " << bar.size() << '\n';

    return 0;
}
