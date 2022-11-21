// cppreference link https://en.cppreference.com/w/cpp/algorithm/ranges/sample
#include <algorithm>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <random>
#include <vector>

void print(auto const& rem, auto const& v)
{
    std::cout << rem << " = [" << std::size(v) << "] { ";
    for (auto const& e : v) {
        std::cout << e << ' ';
    }
    std::cout << "}\n";
}

int main()
{
    const auto in = { 1, 2, 3, 4, 5, 6 };
    print("in", in);

    std::vector<int> out;
    const int max = in.size() + 2;
    auto gen = std::mt19937 { std::random_device {}() };

    for (int n {}; n != max; ++n) {
        out.clear();
        std::ranges::sample(in, std::back_inserter(out), n, gen);
        std::cout << "n = " << n;
        print(", out", out);
    }
}
