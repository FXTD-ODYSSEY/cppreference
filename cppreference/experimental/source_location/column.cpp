// cppreference link https://en.cppreference.com/w/cpp/experimental/source_location/column
#include <experimental/source_location>
#include <iostream>

template <typename T = std::experimental::source_location>
inline void pos(const T& location = T::current())
{
    std::cout
        << "("
        << location.line()
        << ':'
        << location.column()
        << ") ";
}

auto main() -> int
{
    pos();
    std::cout << "Proxima\n";
    pos();
    std::cout << "Centauri\n";
}
