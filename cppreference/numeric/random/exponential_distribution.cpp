// cppreference link https://en.cppreference.com/w/cpp/numeric/random/exponential_distribution
#include <iomanip>
#include <iostream>
#include <map>
#include <random>
#include <string>
int main()
{
    std::random_device rd;
    std::mt19937 gen(rd());

    // if particles decay once per second on average,
    // how much time, in seconds, until the next one?
    std::exponential_distribution<> d(1);

    std::map<int, int> hist;
    for (int n = 0; n < 10000; ++n) {
        ++hist[2 * d(gen)];
    }
    for (auto p : hist) {
        std::cout << std::fixed << std::setprecision(1)
                  << p.first / 2.0 << '-' << (p.first + 1) / 2.0 << ' '
                  << std::string(p.second / 200, '*') << '\n';
    }
}
