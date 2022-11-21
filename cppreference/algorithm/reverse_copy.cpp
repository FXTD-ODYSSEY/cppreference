// cppreference link https://en.cppreference.com/w/cpp/algorithm/reverse_copy
#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    auto print = [](std::vector<int> const& v) {
        for (const auto& value : v)
            std::cout << value << ' ';
        std::cout << '\t';
    };

    std::vector<int> v({ 1, 2, 3 });
    print(v);

    std::vector<int> destination(3);
    std::reverse_copy(std::begin(v), std::end(v), std::begin(destination));
    print(destination);

    std::reverse_copy(std::rbegin(v), std::rend(v), std::begin(destination));
    print(destination);
}
