// cppreference link https://en.cppreference.com/w/cpp/algorithm/bsearch
#include <array>
#include <cstdlib>
#include <iostream>

template <typename T>
int compare(const void* a, const void* b)
{
    const auto& arg1 = *(static_cast<const T*>(a));
    const auto& arg2 = *(static_cast<const T*>(b));
    const auto cmp = arg1 <=> arg2;
    return cmp < 0 ? -1
        : cmp > 0  ? +1
                   : 0;
}

int main()
{
    std::array arr { 1, 2, 3, 4, 5, 6, 7, 8 };

    for (const int key : { 4, 8, 9 }) {

        const int* p = static_cast<int*>(
            std::bsearch(&key,
                arr.data(),
                arr.size(),
                sizeof(decltype(arr)::value_type),
                compare<int>));

        std::cout << "value " << key;
        (p) ? std::cout << " found at position " << (p - arr.data()) << '\n'
            : std::cout << " not found\n";
    }
}
