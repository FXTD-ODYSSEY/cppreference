// cppreference link https://en.cppreference.com/w/cpp/container/deque/rend
#include <algorithm>
#include <deque>
#include <iostream>
#include <numeric>
#include <string>

int main()
{
    std::deque<int> nums { 1, 2, 4, 8, 16 };
    std::deque<std::string> fruits { "orange", "apple", "raspberry" };
    std::deque<char> empty;

    // Print deque.
    std::for_each(nums.rbegin(), nums.rend(), [](const int n) { std::cout << n << ' '; });
    std::cout << '\n';

    // Sums all integers in the deque nums (if any), printing only the result.
    std::cout << "Sum of nums: "
              << std::accumulate(nums.rbegin(), nums.rend(), 0) << '\n';

    // Prints the first fruit in the deque fruits, checking if there is any.
    if (!fruits.empty())
        std::cout << "First fruit: " << *fruits.rbegin() << '\n';

    if (empty.rbegin() == empty.rend())
        std::cout << "deque 'empty' is indeed empty.\n";
}
