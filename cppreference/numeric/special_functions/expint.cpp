// cppreference link https://en.cppreference.com/w/cpp/numeric/special_functions/expint
#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

template <int Height = 5, int BarWidth = 1, int Padding = 1, int Offset = 0, class Seq>
void draw_vbars(Seq&& s, const bool DrawMinMax = true)
{
    static_assert((Height > 0) && (BarWidth > 0) && (Padding >= 0) && (Offset >= 0));
    auto cout_n = [](auto&& v, int n = 1) { while (n-- > 0) std::cout << v; };
    const auto [min, max] = std::minmax_element(std::cbegin(s), std::cend(s));
    std::vector<std::div_t> qr;
    for (typedef decltype(*cbegin(s)) V; V e : s)
        qr.push_back(std::div(std::lerp(V(0), Height * 8, (e - *min) / (*max - *min)), 8));
    for (auto h { Height }; h-- > 0; cout_n('\n')) {
        cout_n(' ', Offset);
        for (auto dv : qr) {
            const auto q { dv.quot }, r { dv.rem };
            unsigned char d[] { 0xe2, 0x96, 0x88, 0 }; // Full Block: '█'
            q < h ? d[0] = ' ', d[1] = 0 : q == h ? d[2] -= (7 - r)
                                                  : 0;
            cout_n(d, BarWidth), cout_n(' ', Padding);
        }
        if (DrawMinMax && Height > 1)
            Height - 1 == h ? std::cout << "┬ " << *max : h ? std::cout << "│ "
                                                            : std::cout << "┴ " << *min;
    }
}

int main()
{
    std::cout << "Ei(0) = " << std::expint(0) << '\n'
              << "Ei(1) = " << std::expint(1) << '\n'
              << "Gompertz constant = " << -std::exp(1) * std::expint(-1) << '\n';

    std::vector<float> v;
    for (float x { 1.f }; x < 8.8f; x += 0.3565f)
        v.push_back(std::expint(x));
    draw_vbars<9, 1, 1>(v);
}
