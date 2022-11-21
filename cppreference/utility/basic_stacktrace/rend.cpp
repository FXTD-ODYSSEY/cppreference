// cppreference link https://en.cppreference.com/w/cpp/utility/basic_stacktrace/rend
#include <algorithm>
#include <iostream>
#include <stacktrace>

int main()
{
    auto trace = std::stacktrace::current();
    auto empty_trace = std::stacktrace {};

    // Print stacktrace.
    std::for_each(trace.rbegin(), trace.rend(),
        [](const auto& f) { std::cout << f << '\n'; });

    if (empty_trace.rbegin() == empty_trace.rend())
        std::cout << "stacktrace 'empty_trace' is indeed empty.\n";
}
