// cppreference link https://en.cppreference.com/w/cpp/numeric/ratio/ratio_greater_equal
#include <iostream>
#include <ratio>

auto main() -> int
{
    static_assert(std::ratio_greater_equal<
                      std::ratio<2, 3>,
                      std::ratio<2, 3>>::value,
        "2/3 >= 2/3");

    if (std::ratio_greater_equal<
            std::ratio<2, 1>, std::ratio<1, 2>>::value) {
        std::cout << "2/1 >= 1/2"
                     "\n";
    }

    if (std::ratio_greater_equal<
            std::ratio<1, 2>, std::ratio<1, 2>>::value) {
        std::cout << "1/2 >= 1/2"
                     "\n";
    }

    // Since C++17
    static_assert(std::ratio_greater_equal_v<
        std::ratio<999'999, 1'000'000>,
        std::ratio<999'998, 999'999>>);

    if constexpr (std::ratio_greater_equal_v<
                      std::ratio<999'999, 1'000'000>,
                      std::ratio<999'998, 999'999>>) {
        std::cout << "999'999/1'000'000 >= 999'998/999'999"
                     "\n";
    }
    if constexpr (std::ratio_greater_equal_v<
                      std::ratio<999'999, 1'000'000>,
                      std::ratio<999'999, 1'000'000>>) {
        std::cout << "999'999/1'000'000 >= 999'999/1'000'000"
                     "\n";
    }
}
