// cppreference link https://en.cppreference.com/w/cpp/chrono/duration/zero
#include <chrono>
#include <ratio>
int main()
{
    static_assert((std::chrono::hours::zero() == std::chrono::nanoseconds::zero()) && (std::chrono::duration<short, std::nano>::zero() == std::chrono::duration<int, std::deci>::zero()) && (std::chrono::duration<short, std::deca>::zero() == std::chrono::duration<long, std::exa>::zero()) && (std::chrono::duration<long, std::atto>::zero().count() == std::chrono::duration<float, std::exa>::zero().count()));
}
