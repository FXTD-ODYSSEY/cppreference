// cppreference link https://en.cppreference.com/w/cpp/experimental/source_location/line
#include <experimental/source_location>
#include <iostream>
#include <string_view>
using std::experimental::source_location;

inline void cur_line(
    const std::string_view message = "",
    const source_location& location = source_location::current())
{
    std::cout
        << location.line() // <- the call-site line #
        << ") "
        << message;
}

auto main() -> int
{
    cur_line("++"
             "\n");
    cur_line();
    std::cout << "Hello,"
                 "\n";
    cur_line();
    std::cout << "C++20!"
                 "\n";
    cur_line("--"
             "\n");
}
