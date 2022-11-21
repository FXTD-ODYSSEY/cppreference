// cppreference link https://en.cppreference.com/w/cpp/types/max_align_t
#include <cstddef>
#include <iostream>
int main()
{
    std::cout << alignof(std::max_align_t) << '\n';
}
