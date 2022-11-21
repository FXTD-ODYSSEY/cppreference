// cppreference link https://en.cppreference.com/w/cpp/utility/basic_stacktrace/to_string
#include <iostream>
#include <stacktrace>
#include <string>

int main()
{
    auto trace = std::stacktrace::current();
    std::cout << std::to_string(trace) << '\n';
}
