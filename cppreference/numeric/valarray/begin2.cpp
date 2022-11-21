// cppreference link https://en.cppreference.com/w/cpp/numeric/valarray/begin2
#include <algorithm>
#include <iostream>
#include <valarray>

auto show = [](std::valarray<int> const& v) {
    std::for_each(std::begin(v), std::end(v), [](int c) {
        std::cout << c << ' ';
    });
    std::cout << '\n';
};

int main()
{
    const std::valarray<int> x { 47, 70, 37, 52, 90, 23, 17, 33, 22, 16, 21, 4 };
    const std::valarray<int> y { 25, 31, 71, 56, 21, 21, 15, 34, 21, 27, 12, 6 };

    show(x);
    show(y);

    const std::valarray<int> z { x + y };

    std::for_each(std::begin(z), std::end(z), [](char c) { std::cout << c; });
}
