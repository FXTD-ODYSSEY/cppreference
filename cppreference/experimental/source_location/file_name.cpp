// cppreference link https://en.cppreference.com/w/cpp/experimental/source_location/file_name
#include <experimental/source_location>
#include <iostream>

inline void print_this_file_name(
    const std::experimental::source_location& location
    = std::experimental::source_location::current())
{
    // Name of file that contains the call-site of this function.
    std::cout << "File: " << location.file_name() << '\n';
}

int main()
{
    print_this_file_name();
}
