// cppreference link https://en.cppreference.com/w/cpp/algorithm/is_sorted_until
#include <algorithm>
#include <cassert>
#include <iostream>
#include <iterator>
#include <random>
#include <string>

int main()
{
    std::random_device rd;
    std::mt19937 g(rd());
    const int N = 6;
    int nums[N] = { 3, 1, 4, 1, 5, 9 };

    const int min_sorted_size = 4;

    for (int sorted_size = 0; sorted_size < min_sorted_size;) {
        std::shuffle(nums, nums + N, g);
        int* const sorted_end = std::is_sorted_until(nums, nums + N);
        sorted_size = std::distance(nums, sorted_end);
        assert(sorted_size >= 1);

        for (auto i : nums)
            std::cout << i << ' ';
        std::cout << ": " << sorted_size << " initial sorted elements\n"
                  << std::string(sorted_size * 2 - 1, '^') << '\n';
    }
}
