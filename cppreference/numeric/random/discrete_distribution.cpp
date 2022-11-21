// cppreference link https://en.cppreference.com/w/cpp/numeric/random/discrete_distribution
#include <iomanip>
#include <iostream>
#include <map>
#include <random>

int main()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::discrete_distribution<> d({ 40, 10, 10, 40 });
    std::map<int, int> map;
    for (int n = 0; n < 10000; ++n) {
        ++map[d(gen)];
    }
    for (const auto& [num, count] : map) {
        std::cout << num << " generated " << std::setw(4) << count << " times\n";
    }
}
