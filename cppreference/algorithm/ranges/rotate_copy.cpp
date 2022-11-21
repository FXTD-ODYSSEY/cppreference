// cppreference link https://en.cppreference.com/w/cpp/algorithm/ranges/rotate_copy
#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main()
{
    std::vector<int> src { 1, 2, 3, 4, 5 };
    std::vector<int> dest(src.size());
    auto pivot = std::ranges::find(src, 3);

    std::ranges::rotate_copy(src, pivot, dest.begin());
    for (int i : dest) {
        std::cout << i << ' ';
    }
    std::cout << '\n';

    // copy the rotation result directly to the std::cout
    pivot = std::ranges::find(dest, 1);
    std::ranges::rotate_copy(dest, pivot, std::ostream_iterator<int>(std::cout, " "));
    std::cout << '\n';
}
