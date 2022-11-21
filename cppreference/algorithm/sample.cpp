// cppreference link https://en.cppreference.com/w/cpp/algorithm/sample
#include <algorithm>
#include <iostream>
#include <iterator>
#include <random>
#include <string>

int main()
{
    std::string in = "hgfedcba", out;
    std::sample(in.begin(), in.end(), std::back_inserter(out),
        5, std::mt19937 { std::random_device {}() });
    std::cout << "five random letters out of " << in << ": " << out << '\n';
}
