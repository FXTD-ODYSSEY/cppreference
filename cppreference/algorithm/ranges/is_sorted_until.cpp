// cppreference link https://en.cppreference.com/w/cpp/algorithm/ranges/is_sorted_until
#include <algorithm>
#include <iostream>
#include <iterator>
#include <random>

int main()
{
    std::random_device rd;
    std::mt19937 g { rd() };
    std::array nums { 3, 1, 4, 1, 5, 9 };

    constexpr int min_sorted_size = 4;
    int sorted_size = 0;
    do {
        std::ranges::shuffle(nums, g);
        const auto sorted_end = std::ranges::is_sorted_until(nums);
        sorted_size = std::ranges::distance(nums.begin(), sorted_end);

        std::ranges::copy(nums, std::ostream_iterator<int>(std::cout, " "));
        std::cout << ": " << sorted_size << " leading sorted element(s)\n";
    } while (sorted_size < min_sorted_size);
}
