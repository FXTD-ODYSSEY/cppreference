// cppreference link https://en.cppreference.com/w/cpp/string/byte/memset
#include <bitset>
#include <climits>
#include <cstring>
#include <iostream>

int main()
{
    int a[4];
    using bits = std::bitset<sizeof(int) * CHAR_BIT>;
    std::memset(a, 0b1111'0000'0011, sizeof a);
    for (int ai : a)
        std::cout << bits(ai) << '\n';
}
