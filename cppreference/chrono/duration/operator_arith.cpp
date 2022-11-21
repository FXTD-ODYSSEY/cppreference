// cppreference link https://en.cppreference.com/w/cpp/chrono/duration/operator_arith
#include <chrono>
#include <iostream>

int main()
{
    std::chrono::seconds s1(10);
    std::chrono::seconds s2 = -s1;

    std::cout << "negated 10 seconds are " << s2.count() << " seconds\n";
}
