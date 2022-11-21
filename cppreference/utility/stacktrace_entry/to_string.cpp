// cppreference link https://en.cppreference.com/w/cpp/utility/stacktrace_entry/to_string
#include <iostream>
#include <stacktrace>
#include <string>

int main()
{
    auto st = std::stacktrace::current();
    std::cout << "Description of an empty stacktrace entry:\n" + std::to_string(std::stacktrace_entry {}) << '\n';
    if (st.size() > 0) {
        std::cout << "Description of a non-empty stacktrace entry:\n" + std::to_string(st[0]) << '\n';
    }
}
