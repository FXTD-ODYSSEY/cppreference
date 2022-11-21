// cppreference link https://en.cppreference.com/w/cpp/utility/basic_stacktrace/operator_ltlt
#include <iostream>
#include <stacktrace>

int main()
{
    std::cout << "The stacktrace obtained in the main function:\n";
    std::cout << std::stacktrace::current() << '\n';
    [] {
        std::cout << "The stacktrace obtained in a nested lambda:\n";
        std::cout << std::stacktrace::current() << '\n';
    }();
}
