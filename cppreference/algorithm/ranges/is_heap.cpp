// cppreference link https://en.cppreference.com/w/cpp/algorithm/ranges/is_heap
#include <algorithm>
#include <bit>
#include <cmath>
#include <iostream>
#include <vector>

void out(const auto& what, int n = 1)
{
    while (n-- > 0)
        std::cout << what;
}

void draw_heap(auto const& v);

int main()
{
    std::vector<int> v { 3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5, 8, 9, 7, 9, 3, 2, 3, 8 };

    out("initially, v:\n");
    for (auto i : v)
        std::cout << i << ' ';
    out('\n');

    if (!std::ranges::is_heap(v)) {
        out("making heap...\n");
        std::ranges::make_heap(v);
    }

    out("after make_heap, v:\n");
    for (auto t { 1U }; auto i : v) {
        std::cout << i << (std::has_single_bit(++t) ? " │ " : " ");
    }

    out("\n"
        "corresponding binary tree is:\n");
    draw_heap(v);
}

void draw_heap(auto const& v)
{
    auto bails = [](int n, int w) {
        auto b = [](int w) { out("┌"), out("─", w), out("┴"), out("─", w), out("┐"); };
        n /= 2;
        if (!n)
            return;
        for (out(' ', w); n-- > 0;)
            b(w), out(' ', w + w + 1);
        out('\n');
    };
    auto data = [](int n, int w, auto& first, auto last) {
        for (out(' ', w); n-- > 0 && first != last; ++first)
            out(*first), out(' ', w + w + 1);
        out('\n');
    };
    auto tier = [&](int t, int m, auto& first, auto last) {
        const int n { 1 << t };
        const int w { (1 << (m - t - 1)) - 1 };
        bails(n, w), data(n, w, first, last);
    };
    const int m { static_cast<int>(std::ceil(std::log2(1 + v.size()))) };
    auto first { v.cbegin() };
    for (int i {}; i != m; ++i) {
        tier(i, m, first, v.cend());
    }
}
