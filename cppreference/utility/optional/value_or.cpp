// cppreference link https://en.cppreference.com/w/cpp/utility/optional/value_or
#include <cstdlib>
#include <iostream>
#include <optional>

std::optional<const char*> maybe_getenv(const char* n)
{
    if (const char* x = std::getenv(n))
        return x;
    else
        return {};
}
int main()
{
    std::cout << maybe_getenv("MYPWD").value_or("(none)") << '\n';
}
