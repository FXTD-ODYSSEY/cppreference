// cppreference link https://en.cppreference.com/w/cpp/numeric/random/srand
#include <cstdlib>
#include <ctime>
#include <iostream>

int main()
{
    std::srand(std::time(0)); // use current time as seed for random generator
    int random_variable = std::rand();
    std::cout << "Random value on [0 " << RAND_MAX << "]: "
              << random_variable << '\n';
}
