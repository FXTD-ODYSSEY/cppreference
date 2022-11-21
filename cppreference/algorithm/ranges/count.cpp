// cppreference link https://en.cppreference.com/w/cpp/algorithm/ranges/count
#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v { 1, 2, 3, 4, 4, 3, 7, 8, 9, 10 };

    namespace ranges = std::ranges;

    // determine how many integers in a std::vector match a target value.
    int target1 = 3;
    int target2 = 5;
    int num_items1 = ranges::count(v.begin(), v.end(), target1);
    int num_items2 = ranges::count(v, target2);
    std::cout << "number: " << target1 << " count: " << num_items1 << '\n';
    std::cout << "number: " << target2 << " count: " << num_items2 << '\n';

    // use a lambda expression to count elements divisible by 3.
    int num_items3 = ranges::count_if(v.begin(), v.end(), [](int i) { return i % 3 == 0; });
    std::cout << "number divisible by three: " << num_items3 << '\n';

    // use a lambda expression to count elements divisible by 11.
    int num_items11 = ranges::count_if(v, [](int i) { return i % 11 == 0; });
    std::cout << "number divisible by eleven: " << num_items11 << '\n';
}
