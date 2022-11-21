// cppreference link https://en.cppreference.com/w/cpp/utility/source_location/column
#include <iostream>
#include <source_location>

template <typename T = std::source_location>
inline void pos(const T& location = T::current())
{
    std::cout
        << "("
        << location.line()
        << ':'
        << location.column()
        << ") ";
}

int main()
{
    //      ↓: column #9
    pos();
    std::cout << "Proxima\n"; // row #18
    pos();
    std::cout << "Centauri\n"; // row #19
    //        ↑: column #11
}
