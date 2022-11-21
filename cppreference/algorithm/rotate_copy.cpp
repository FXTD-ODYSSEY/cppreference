// cppreference link https://en.cppreference.com/w/cpp/algorithm/rotate_copy
#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main()
{
    std::vector<int> src = { 1, 2, 3, 4, 5 };
    std::vector<int> dest(src.size());
    auto pivot = std::find(src.begin(), src.end(), 3);

    std::rotate_copy(src.begin(), pivot, src.end(), dest.begin());
    for (int i : dest) {
        std::cout << i << ' ';
    }
    std::cout << '\n';

    // copy the rotation result directly to the std::cout
    pivot = std::find(dest.begin(), dest.end(), 1);
    std::rotate_copy(dest.begin(), pivot, dest.end(),
        std::ostream_iterator<int>(std::cout, " "));
    std::cout << '\n';
}
