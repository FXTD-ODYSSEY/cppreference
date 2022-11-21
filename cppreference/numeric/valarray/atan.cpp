// cppreference link https://en.cppreference.com/w/cpp/numeric/valarray/atan
#include <algorithm>
#include <cmath>
#include <iostream>
#include <valarray>

auto show = [](char const* title, const std::valarray<float>& va) {
    std::cout << title << ":";
    std::for_each(std::begin(va), std::end(va),
        [](const float x) { std::cout << "  " << std::fixed << x; });
    std::cout << '\n';
};

int main()
{
    const std::valarray<float> x = { .1f, .3f, .6f, .9f };
    const std::valarray<float> f = std::atan(x);
    const std::valarray<float> g = std::tan(f);

    show("x          ", x);
    show("f = atan(x)", f);
    show("g = tan(f) ", g);
}
