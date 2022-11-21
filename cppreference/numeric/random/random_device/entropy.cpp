// cppreference link https://en.cppreference.com/w/cpp/numeric/random/random_device/entropy
#include <iostream>
#include <random>

int main()
{
    std::random_device rd;
    std::cout << rd.entropy() << '\n';
}
