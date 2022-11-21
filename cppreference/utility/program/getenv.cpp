// cppreference link https://en.cppreference.com/w/cpp/utility/program/getenv
#include <cstdlib>
#include <iostream>

int main()
{
    if (const char* env_p = std::getenv("PATH"))
        std::cout << "Your PATH is: " << env_p << '\n';
}
