// cppreference link https://en.cppreference.com/w/cpp/utility/bitset/size
#include <bitset>
#include <iostream>

int main()
{
    std::cout << std::bitset<0x400>().size() << '\n';
}
