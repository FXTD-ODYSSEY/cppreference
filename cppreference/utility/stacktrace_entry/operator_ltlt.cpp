// cppreference link https://en.cppreference.com/w/cpp/utility/stacktrace_entry/operator_ltlt
#include <iostream>
#include <stacktrace>

int main()
{
    for (const auto& f : std::stacktrace::current())
        std::cout << f << '\n';
}
