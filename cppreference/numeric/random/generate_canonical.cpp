// cppreference link https://en.cppreference.com/w/cpp/numeric/random/generate_canonical
#include <iostream>
#include <random>

int main()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    for (int n = 0; n < 10; ++n) {
        std::cout << std::generate_canonical<double, 10>(gen) << ' ';
    }
}
