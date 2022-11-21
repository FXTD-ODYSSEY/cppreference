// cppreference link https://en.cppreference.com/w/cpp/types/extent
#include <iostream>
#include <type_traits>

int main()
{
    std::cout << std::extent<int[3]>::value << '\n'; //< default dimension is 0
    std::cout << std::extent<int[3][4], 0>::value << '\n';
    std::cout << std::extent<int[3][4], 1>::value << '\n';
    std::cout << std::extent<int[3][4], 2>::value << '\n';
    std::cout << std::extent<int[]>::value << '\n';

    const auto ext = std::extent<int[9]> {};
    std::cout << ext << '\n'; //< implicit conversion to std::size_t

    const int ints[] = { 1, 2, 3, 4 };
    std::cout << std::extent<decltype(ints)>::value << '\n'; //< array size

    [[maybe_unused]] int ary[][3] = { { 1, 2, 3 } };

    // ary[0] is type of reference of 'int[3]', so, extent
    // cannot calculate correctly and return 0
    static_assert(std::is_same_v<decltype(ary[0]), int(&)[3]>);
    std::cout << std::extent<decltype(ary[0])>::value << '\n';
    // removing reference will give correct extent value 3
    std::cout << std::extent<std::remove_cvref_t<decltype(ary[0])>>::value << '\n';
}
