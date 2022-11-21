// cppreference link https://en.cppreference.com/w/cpp/experimental/randint
#include <experimental/random>
#include <iostream>

int main()
{
    int random_number = std::experimental::randint(100, 999);
    std::cout << "random 3-digit number: " << random_number << '\n';
}
