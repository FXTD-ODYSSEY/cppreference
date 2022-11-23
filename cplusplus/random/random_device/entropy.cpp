// cplusplus link https://cplusplus.com/reference/random\random_device\entropy
// random_device example
#include <iostream>
#include <random>

int main()
{
    std::random_device rd;

    std::cout << "default random_device characteristics:" << std::endl;
    std::cout << "minimum: " << rd.min() << std::endl;
    std::cout << "maximum: " << rd.max() << std::endl;
    std::cout << "entropy: " << rd.entropy() << std::endl;
    std::cout << "a random number: " << rd() << std::endl;

    return 0;
}
