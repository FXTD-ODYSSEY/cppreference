// cppreference link https://en.cppreference.com/w/cpp/io/ios_base/sync_with_stdio
#include <cstdio>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cout << "a\n";
    std::printf("b\n");
    std::cout << "c\n";
}
