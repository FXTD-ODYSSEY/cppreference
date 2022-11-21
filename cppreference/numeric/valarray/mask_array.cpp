// cppreference link https://en.cppreference.com/w/cpp/numeric/valarray/mask_array
#include <iostream>
#include <valarray>

int main()
{
    std::valarray<int> data = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    std::cout << "Initial valarray: ";
    for (int n : data)
        std::cout << n << ' ';
    std::cout << '\n';

    data[data > 5] = -1;
    // the type of data>5 is std::valarray<bool>
    // the type of data[data>5] is std::mask_array<int>

    std::cout << "After v[v>5]=-1:  ";
    for (int n : data)
        std::cout << n << ' ';
    std::cout << '\n';
}
