// cplusplus link https://cplusplus.com/reference/random\random_device\random_device
// random_device constructor
#include <iostream>
#include <random>

int main()
{
    std::random_device rd;

    std::cout << "Random value: " << rd() << std::endl;

    return 0;
}
