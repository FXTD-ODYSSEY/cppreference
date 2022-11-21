// cppreference link https://en.cppreference.com/w/cpp/chrono/duration/operator_arith3
#include <chrono>
#include <iostream>

int main()
{
    std::chrono::minutes m(11);
    m *= 2;
    m += std::chrono::hours(10); // hours implicitly convert to minutes
    std::cout << m.count() << " minutes equals "
              << std::chrono::duration_cast<std::chrono::hours>(m).count()
              << " hours and ";
    m %= std::chrono::hours(1);
    std::cout << m.count() << " minutes\n";
}
