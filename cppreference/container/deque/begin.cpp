// cppreference link https://en.cppreference.com/w/cpp/container/deque/begin
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
    std::for_each(nums.begin(), nums.end(), [](const int n) { std::cout << n << ' '; });
    std::cout << '\n';

    // Sums all integers in the deque nums (if any), printing only the result.
    std::cout << "Sum of nums: "
              << std::accumulate(nums.begin(), nums.end(), 0) << '\n';

    // Prints the first fruit in the deque fruits, checking if there is any.
    if (!fruits.empty())
        std::cout << "First fruit: " << *fruits.begin() << '\n';

    if (empty.begin() == empty.end())
        std::cout << "deque 'empty' is indeed empty.\n";
}
