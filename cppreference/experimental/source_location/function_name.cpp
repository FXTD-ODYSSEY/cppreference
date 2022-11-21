// cppreference link https://en.cppreference.com/w/cpp/experimental/source_location/function_name
#include <experimental/source_location>
#include <iostream>
#include <string_view>

inline void function_name(
    const std::string_view signature = "()",
    const std::experimental::source_location& location
    = std::experimental::source_location::current())
{
    std::cout
        << location.function_name() // <- name of the caller!
        << signature
        << '\n';
}

void foo() { function_name(); }

struct S {
    S() { function_name(); }
    S(int) { function_name("(int)"); }
    S& operator=(S const&)
    {
        function_name("(const S&)");
        return *this;
    }
    S& operator=(S&&)
    {
        function_name("(S&&)");
        return *this;
    }
    ~S() { function_name(); }
};

int main()
{
    foo();
    S p;
    S q { 42 };
    p = q;
    p = std::move(q);
}
