// cppreference link https://en.cppreference.com/w/cpp/algorithm/qsort
#include <array>
#include <climits>
#include <compare>
#include <cstdlib>
#include <iostream>

int main()
{
    std::array a { -2, 99, 0, -743, INT_MAX, 2, INT_MIN, 4 };

    std::qsort(
        a.data(),
        a.size(),
        sizeof(decltype(a)::value_type),
        [](const void* x, const void* y) {
            const int arg1 = *static_cast<const int*>(x);
            const int arg2 = *static_cast<const int*>(y);
            const auto cmp = arg1 <=> arg2;
            if (cmp < 0)
                return -1;
            if (cmp > 0)
                return 1;
            return 0;
        });

    for (int ai : a)
        std::cout << ai << ' ';
}
