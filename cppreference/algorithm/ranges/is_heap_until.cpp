// cppreference link https://en.cppreference.com/w/cpp/algorithm/ranges/is_heap_until
#include <algorithm>
#include <cmath>
#include <iostream>
#include <iterator>
#include <vector>

void out(const auto& what, int n = 1)
{
    while (n-- > 0)
        std::cout << what;
}

void draw_bin_tree(auto first, auto last);

int main()
{
    std::vector<int> v {
        3,
        1,
        4,
        1,
        5,
        9,
    };
    std::ranges::make_heap(v);

    // probably mess up the heap
    v.push_back(2);
    v.push_back(6);

    out("v after make_heap and push_back: \n");
    draw_bin_tree(v.begin(), v.end());

    out("the max-heap prefix of v: \n");
    const auto heap_end = std::ranges::is_heap_until(v);
    draw_bin_tree(v.begin(), heap_end);
}

void draw_bin_tree(auto first, auto last)
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
    const auto size { std::ranges::distance(first, last) };
    const int m { static_cast<int>(std::ceil(std::log2(1 + size))) };
    for (int i {}; i != m; ++i) {
        tier(i, m, first, last);
    }
}
