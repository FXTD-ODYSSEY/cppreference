// cppreference link https://en.cppreference.com/w/cpp/algorithm/ranges/inplace_merge
#include <algorithm>
#include <complex>
#include <functional>
#include <iostream>
#include <iterator>
#include <vector>

void print(auto const& v, auto const& rem, int middle = -1)
{
    for (int i {}; auto n : v)
        std::cout << (i++ == middle ? "│ " : "") << n << ' ';
    std::cout << rem << '\n';
}

template <std::random_access_iterator I, std::sentinel_for<I> S>
    requires std::sortable<I>
void merge_sort(I first, S last)
{
    if (last - first > 1) {
        I middle { first + (last - first) / 2 };
        merge_sort(first, middle);
        merge_sort(middle, last);
        std::ranges::inplace_merge(first, middle, last);
    }
}

int main()
{
    // custom merge-sort demo
    std::vector v { 8, 2, 0, 4, 9, 8, 1, 7, 3 };
    print(v, ": before sort");
    merge_sort(v.begin(), v.end());
    print(v, ": after sort\n");

    // merging with comparison function object and projection
    using CI = std::complex<int>;
    std::vector<CI> r { { 0, 1 }, { 0, 2 }, { 0, 3 }, { 1, 1 }, { 1, 2 } };
    const auto middle { std::ranges::next(r.begin(), 3) };
    auto comp { std::ranges::less {} };
    auto proj { [](CI z) { return z.imag(); } };

    print(r, ": before merge", middle - r.begin());
    std::ranges::inplace_merge(r, middle, comp, proj);
    print(r, ": after merge");
}
