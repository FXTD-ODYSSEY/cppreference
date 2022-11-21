// cppreference link https://en.cppreference.com/w/cpp/types/rank
#include <iostream>
#include <type_traits>

int main()
{
    std::cout << std::rank<int> {} << "\n\n";

    std::cout << std::rank<int[5]> {} << '\n';
    std::cout << std::rank<int[5][5]> {} << '\n';
    std::cout << std::rank<int[][5][5]> {} << '\n';

    [[maybe_unused]] int ary[][3] = { { 1, 2, 3 } };
    // The reason of rank of "ary[0]" is calculated as 0
    std::cout << std::rank<decltype(ary[0])>::value << '\n';
    // is that rank cannot deal with reference type. i.e. int(&)[3]
    static_assert(std::is_same_v<decltype(ary[0]), int(&)[3]>);
    // The solution is to remove reference type
    std::cout << std::rank<std::remove_cvref_t<decltype(ary[0])>>::value << '\n';
}
