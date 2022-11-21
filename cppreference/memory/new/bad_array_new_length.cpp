// cppreference link https://en.cppreference.com/w/cpp/memory/new/bad_array_new_length
#include <climits>
#include <iostream>
#include <new>

int main()
{
    try {
        int negative = -1;
        new int[negative];
    } catch (const std::bad_array_new_length& e) {
        std::cout << "1) " << e.what() << ": negative size\n";
    }

    try {
        int small = 1;
        new int[small] { 1, 2, 3 };
    } catch (const std::bad_array_new_length& e) {
        std::cout << "2) " << e.what() << ": too many initializers\n";
    }

    try {
        long large = LONG_MAX;
        new int[large][1000];
    } catch (const std::bad_array_new_length& e) {
        std::cout << "3) " << e.what() << ": too large\n";
    }

    std::cout << "End\n";
}
