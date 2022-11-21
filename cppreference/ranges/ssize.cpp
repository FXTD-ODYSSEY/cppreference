// cppreference link https://en.cppreference.com/w/cpp/ranges/ssize
#include <array>
#include <iostream>
#include <ranges>
#include <type_traits>

int main()
{
    std::array arr { 1, 2, 3, 4, 5 };
    auto s = std::ranges::ssize(arr);

    std::cout << "ranges::ssize(arr) = " << s << '\n'
              << "ranges::ssize is "
              << (std::is_signed_v<decltype(s)> ? "signed" : "unsigned")
              << '\n';

    std::cout << "reversed arr: ";

    for (--s; s >= 0; --s)
        std::cout << arr[s] << ' ';

    std::cout << "\n"
                 "s = "
              << s << '\n';
}
