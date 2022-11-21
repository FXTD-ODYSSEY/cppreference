// cppreference link https://en.cppreference.com/w/cpp/algorithm/search_n
#include <algorithm>
#include <iostream>
#include <iterator>

template <class Container, class Size, class T>
[[nodiscard]] bool consecutive_values(const Container& c, Size count, const T& v)
{
    return std::search_n(std::begin(c), std::end(c), count, v) != std::end(c);
}

int main()
{
    const char sequence[] = "1001010100010101001010101";

    std::cout << std::boolalpha
              << "Has 4 consecutive zeros: "
              << consecutive_values(sequence, 4, '0') << '\n'
              << "Has 3 consecutive zeros: "
              << consecutive_values(sequence, 3, '0') << '\n';
}
