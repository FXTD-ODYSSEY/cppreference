// cppreference link https://en.cppreference.com/w/cpp/numeric/valarray/end2
#include <algorithm>
#include <iostream>
#include <valarray>

int main()
{
    const std::valarray<char> va {
        'H', 'e', 'l', 'l', 'o',
        ',', ' ',
        'C', '+', '+', '!', '\n'
    };

    std::for_each(
        std::begin(va),
        std::end(va),
        [](char c) {
            std::cout << c;
        });
}
