// cppreference link https://en.cppreference.com/w/cpp/algorithm/unique
#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // a vector containing several duplicate elements
    std::vector<int> v { 1, 2, 1, 1, 3, 3, 3, 4, 5, 4 };
    auto print = [&](int id) {
        std::cout << "@" << id << ": ";
        for (int i : v)
            std::cout << i << ' ';
        std::cout << '\n';
    };
    print(1);

    // remove consecutive (adjacent) duplicates
    auto last = std::unique(v.begin(), v.end());
    // v now holds {1 2 1 3 4 5 4 x x x}, where 'x' is indeterminate
    v.erase(last, v.end());
    print(2);

    // sort followed by unique, to remove all duplicates
    std::sort(v.begin(), v.end()); // {1 1 2 3 4 4 5}
    print(3);

    last = std::unique(v.begin(), v.end());
    // v now holds {1 2 3 4 5 x x}, where 'x' is indeterminate
    v.erase(last, v.end());
    print(4);
}
