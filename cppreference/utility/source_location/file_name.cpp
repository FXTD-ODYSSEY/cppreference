// cppreference link https://en.cppreference.com/w/cpp/utility/source_location/file_name
#include <iostream>
#include <source_location>

void print_this_file_name(
    std::source_location location = std::source_location::current())
{
    // Name of file that contains the call site of this function.
    std::cout << "File: " << location.file_name() << '\n';
}

int main()
{
#line 1 "cppreference.cpp"
    print_this_file_name();
}
