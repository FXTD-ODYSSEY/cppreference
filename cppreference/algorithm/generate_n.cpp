// cppreference link https://en.cppreference.com/w/cpp/algorithm/generate_n
#include <algorithm>
#include <functional>
#include <iostream>
#include <iterator>
#include <random>

int main()
{
    std::mt19937 rng; // default constructed, seeded with fixed seed
    std::generate_n(std::ostream_iterator<std::mt19937::result_type>(std::cout, " "),
        5, std::ref(rng));
    std::cout << '\n';
}
