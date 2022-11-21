// cppreference link https://en.cppreference.com/w/cpp/numeric/random/RAND_MAX
#include <climits>
#include <cstdlib>
#include <ctime>
#include <iostream>

int main()
{
    // use current time as seed for random generator
    std::srand(std::time(NULL));

    std::cout << "RAND_MAX: " << RAND_MAX << '\n'
              << "INT_MAX: " << INT_MAX << '\n'
              << "Random value on [0,1]: "
              << static_cast<double>(std::rand()) / RAND_MAX << '\n';
}
