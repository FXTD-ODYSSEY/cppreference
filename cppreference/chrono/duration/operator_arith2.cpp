// cppreference link https://en.cppreference.com/w/cpp/chrono/duration/operator_arith2
#include <chrono>
#include <iostream>

int main()
{
    std::chrono::hours h(1);
    std::chrono::minutes m = ++h;
    m--;
    std::cout << m.count() << " minutes\n";
}
