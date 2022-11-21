// cppreference link https://en.cppreference.com/w/cpp/algorithm/ranges/stable_partition
#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

namespace rng = std::ranges;

template <std::permutable I, std::sentinel_for<I> S>
constexpr void stable_sort(I first, S last)
{
    if (first == last)
        return;

    auto pivot = *rng::next(first, rng::distance(first, last) / 2, last);
    auto left = [pivot](const auto& em) { return em < pivot; };
    auto tail1 = rng::stable_partition(first, last, left);
    auto right = [pivot](const auto& em) { return !(pivot < em); };
    auto tail2 = rng::stable_partition(tail1, right);

    stable_sort(first, tail1.begin());
    stable_sort(tail2.begin(), tail2.end());
}

void print(const auto rem, auto first, auto last, bool end = true)
{
    std::cout << rem;
    for (; first != last; ++first) {
        std::cout << *first << ' ';
    }
    std::cout << (end ? "\n" : "");
}

int main()
{
    const auto original = { 9, 6, 5, 2, 3, 1, 7, 8 };

    std::vector<int> vi;
    auto even = [](int x) { return 0 == (x % 2); };

    print("Original vector:\t", original.begin(), original.end(), "\n");

    vi = original;
    const auto ret1 = rng::stable_partition(vi, even);
    print("Stable partitioned:\t", vi.begin(), ret1.begin(), 0);
    print("│ ", ret1.begin(), ret1.end());

    vi = original;
    const auto ret2 = rng::partition(vi, even);
    print("Partitioned:\t\t", vi.begin(), ret2.begin(), 0);
    print("│ ", ret2.begin(), ret2.end());

    vi = { 16, 30, 44, 30, 15, 24, 10, 18, 12, 35 };
    print("Unsorted vector: ", vi.begin(), vi.end());

    stable_sort(rng::begin(vi), rng::end(vi));
    print("Sorted vector:   ", vi.begin(), vi.end());
}
