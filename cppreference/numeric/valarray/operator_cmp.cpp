// cppreference link https://en.cppreference.com/w/cpp/numeric/valarray/operator_cmp
#include <iostream>
#include <valarray>

int main()
{
    // zero all negatives in a valarray
    std::valarray<int> v = { 1, -1, 0, -3, 10, -1, -2 };
    std::cout << "Before: ";
    for (auto n : v) {
        std::cout << n << ' ';
    }
    std::cout << '\n';
    v[v < 0] = 0;
    std::cout << "After: ";
    for (auto n : v) {
        std::cout << n << ' ';
    }
    std::cout << '\n';

    // convert the valarray<bool> result of == to a single bool
    std::valarray<int> a = { 1, 2, 3 };
    std::valarray<int> b = { 2, 4, 6 };

    std::cout << "2*a == b is " << std::boolalpha
              << (2 * a == b).min() << '\n';
}
