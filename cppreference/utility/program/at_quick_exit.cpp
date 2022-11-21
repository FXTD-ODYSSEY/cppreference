// cppreference link https://en.cppreference.com/w/cpp/utility/program/at_quick_exit
#include <cstdlib>
#include <iostream>

void f1()
{
    std::cout << "pushed first" << std::endl; // flush is intentional
}

extern "C" void f2()
{
    std::cout << "pushed second\n";
}

int main()
{
    auto f3 = [] {
        std::cout << "pushed third\n";
    };

    std::at_quick_exit(f1);
    std::at_quick_exit(f2);
    std::at_quick_exit(f3);
    std::quick_exit(0);
}
