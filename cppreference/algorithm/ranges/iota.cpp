// cppreference link https://en.cppreference.com/w/cpp/algorithm/ranges/iota
#include <algorithm>
#include <functional>
#include <iostream>
#include <list>
#include <numeric>
#include <random>
#include <vector>

template <typename Proj = std::identity>
inline void print(auto comment, std::ranges::input_range auto&& range, Proj proj = {})
{
    for (std::cout << comment; auto const& element : range)
        std::cout << proj(element) << ' ';
    std::cout << '\n';
}

int main()
{
    std::list<int> list(8);

    // Fill the list with ascending values: 0, 1, 2, ..., 7
    std::ranges::iota(list, 0);
    print("Contents of the list: ", list);

    // A vector of iterators (see the comment to Example)
    std::vector<std::list<int>::iterator> vec(list.size());

    // Fill with iterators to consecutive list's elements
    std::ranges::iota(vec.begin(), vec.end(), list.begin());

    std::ranges::shuffle(vec, std::mt19937 { std::random_device {}() });
    print("Contents of the list viewed via vector: ", vec, [](auto it) { return *it; });
}
