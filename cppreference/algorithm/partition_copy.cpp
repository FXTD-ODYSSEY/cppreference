// cppreference link https://en.cppreference.com/w/cpp/algorithm/partition_copy
#include <algorithm>
#include <iostream>
#include <utility>

int main()
{
    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int true_arr[5] = { 0 };
    int false_arr[5] = { 0 };

    std::partition_copy(std::begin(arr), std::end(arr), std::begin(true_arr), std::begin(false_arr),
        [](int i) { return i > 5; });

    std::cout << "true_arr: ";
    for (int x : true_arr) {
        std::cout << x << ' ';
    }
    std::cout << '\n';

    std::cout << "false_arr: ";
    for (int x : false_arr) {
        std::cout << x << ' ';
    }
    std::cout << '\n';

    return 0;
}
