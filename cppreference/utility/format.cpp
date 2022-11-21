// cppreference link https://en.cppreference.com/w/cpp/utility/format
#include <cassert>
#include <format>

int main()
{
    std::string message = std::format("The answer is {}.", 42);
    assert(message == "The answer is 42.");
}
