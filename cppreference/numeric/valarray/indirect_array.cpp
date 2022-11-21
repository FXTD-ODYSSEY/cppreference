// cppreference link https://en.cppreference.com/w/cpp/numeric/valarray/indirect_array
#include <iostream>
#include <valarray>

int main()
{
    std::valarray<int> data = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    std::valarray<std::size_t> idx = { 0, 2, 4, 6, 8 };

    std::cout << "Original valarray: ";
    for (int n : data)
        std::cout << n << ' ';
    std::cout << '\n';

    data[idx] += data[idx]; // double the values at indexes 'idx'

    // the type of data[idx] is std::indirect_array<int>

    std::cout << "After indirect modification: ";
    for (int n : data)
        std::cout << n << ' ';
    std::cout << '\n';
}
