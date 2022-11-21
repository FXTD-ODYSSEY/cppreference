// cppreference link https://en.cppreference.com/w/cpp/numeric/random/piecewise_linear_distribution
#include <iomanip>
#include <iostream>
#include <map>
#include <random>
#include <string>

int main()
{
    std::random_device rd;
    std::mt19937 gen { rd() };
    // increase the probability from 0 to 5
    // remain flat from 5 to 10
    // decrease from 10 to 15 at the same rate
    std::vector<double> i { 0, 5, 10, 15 };
    std::vector<double> w { 0, 1, 1, 0 };
    std::piecewise_linear_distribution<> d { i.begin(), i.end(), w.begin() };

    std::map<int, int> hist;
    for (int n = 0; n < 10000; ++n) {
        ++hist[d(gen)];
    }
    for (auto p : hist) {
        std::cout << std::setw(2) << std::setfill('0') << p.first << ' '
                  << std::string(p.second / 100, '*') << '\n';
    }
}
