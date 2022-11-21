// cppreference link https://en.cppreference.com/w/cpp/algorithm/ranges/push_heap
#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

void out(const auto& what, int n = 1)
{
    while (n-- > 0)
        std::cout << what;
}

void print(auto rem, auto const& v)
{
    out(rem);
    for (auto e : v) {
        out(e), out(' ');
    }
    out('\n');
}

void draw_heap(auto const& v);

int main()
{
    std::vector<int> v {
        1,
        6,
        1,
        8,
        0,
        3,
    };
    print("source vector v: ", v);

    std::ranges::make_heap(v);
    print("after make_heap: ", v);
    draw_heap(v);

    v.push_back(9);

    print("before push_heap: ", v);
    draw_heap(v);

    std::ranges::push_heap(v);
    print("after push_heap: ", v);
    draw_heap(v);
}

void draw_heap(auto const& v)
{
    auto bails = [](int n, int w) {
        auto b = [](int w) { out("┌"), out("─", w), out("┴"), out("─", w), out("┐"); };
        if (!(n /= 2))
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
