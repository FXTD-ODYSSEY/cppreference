// cppreference link https://en.cppreference.com/w/cpp/container/array/rend
#include <algorithm>
#include <array>
#include <iostream>

int main()
{
    std::array<int, 11> a { 1, 11, 11, 35, 0, 12, 79, 76, 76, 69, 40 };

    // print elements of array in reverse order using const_reverse_iterator`s
    std::for_each(a.crbegin(), a.crend(), [](int e) { std::cout << e << ' '; });
    //              ^^           ^^
    std::cout << '\n';

    // modify each element of array using non-const reverse_iterator`s
    std::for_each(a.rbegin(), a.rend(), [](int& e) { e += 32; });
    //              ^           ^             ^

    // print elements as chars in reverse order using const_reverse_iterator`s
    std::for_each(a.crbegin(), a.crend(), [](char e) { std::cout << e; });
    //              ^^           ^^          ^^^^
    std::cout << '\n';
}
