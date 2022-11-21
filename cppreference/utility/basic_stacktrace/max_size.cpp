// cppreference link https://en.cppreference.com/w/cpp/utility/basic_stacktrace/max_size
#include <iostream>
#include <stacktrace>

int main()
{
    std::stacktrace trace;
    std::cout << "Maximum size of a 'basic_stacktrace' is " << trace.max_size() << "\n";
}
