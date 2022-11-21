// cppreference link https://en.cppreference.com/w/cpp/algorithm/ranges/remove_copy
#include <algorithm>
#include <array>
#include <complex>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <string_view>
#include <vector>

void print(const auto rem, const auto& v)
{
    std::cout << rem << ' ';
    for (const auto& e : v) {
        std::cout << e << ' ';
    };
    std::cout << '\n';
}

int main()
{
    // Filter out the hash symbol from the given string.
    const std::string_view str { "#Small #Buffer #Optimization" };
    std::cout << "before: " << std::quoted(str) << "\n";

    std::cout << "after:  \"";
    std::ranges::remove_copy(str.begin(), str.end(),
        std::ostream_iterator<char>(std::cout), '#');
    std::cout << "\"\n";

    // Copy only the complex numbers with positive imaginary part.
    using Ci = std::complex<int>;
    constexpr std::array<Ci, 5> source {
        Ci { 1, 0 }, Ci { 0, 1 }, Ci { 2, -1 }, Ci { 3, 2 }, Ci { 4, -3 }
    };
    std::vector<std::complex<int>> target;

    std::ranges::remove_copy_if(
        source,
        std::back_inserter(target),
        [](int imag) { return imag <= 0; },
        [](Ci z) { return z.imag(); });

    print("source:", source);
    print("target:", target);
}
