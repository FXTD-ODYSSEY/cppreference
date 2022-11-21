// cppreference link https://en.cppreference.com/w/cpp/language/range-for
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v = { 0, 1, 2, 3, 4, 5 };

    for (const int& i : v) // access by const reference
        std::cout << i << ' ';
    std::cout << '\n';

    for (auto i : v) // access by value, the type of i is int
        std::cout << i << ' ';
    std::cout << '\n';

    for (auto&& i : v) // access by forwarding reference, the type of i is int&
        std::cout << i << ' ';
    std::cout << '\n';

    const auto& cv = v;

    for (auto&& i : cv) // access by f-d reference, the type of i is const int&
        std::cout << i << ' ';
    std::cout << '\n';

    for (int n : { 0, 1, 2, 3, 4, 5 }) // the initializer may be a braced-init-list
        std::cout << n << ' ';
    std::cout << '\n';

    int a[] = { 0, 1, 2, 3, 4, 5 };
    for (int n : a) // the initializer may be an array
        std::cout << n << ' ';
    std::cout << '\n';

    for ([[maybe_unused]] int n : a)
        std::cout << 1 << ' '; // the loop variable need not be used
    std::cout << '\n';

    for (auto n = v.size(); auto i : v) // the init-statement (C++20)
        std::cout << --n + i << ' ';
    std::cout << '\n';

    for (typedef decltype(v)::value_type elem_t; elem_t i : v)
        // typedef declaration as init-statement (C++20)
        std::cout << i << ' ';
    std::cout << '\n';

    for (using elem_t = decltype(v)::value_type; elem_t i : v)
        // alias declaration as init-statement (C++23)
        std::cout << i << ' ';
    std::cout << '\n';
}
