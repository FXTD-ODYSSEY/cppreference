// cppreference link https://en.cppreference.com/w/cpp/utility/pair/pair
#include <complex>
#include <iostream>
#include <string>
#include <tuple>
#include <utility>

int main()
{
    auto print = [](auto rem, auto const& pair) {
        std::cout << rem << "(" << pair.first << ", " << pair.second << ")\n";
    };

    std::pair<int, float> p1;
    print("(1) Value-initialized: ", p1);

    std::pair<int, double> p2 { 42, 3.1415 };
    print("(2) Initialized with two values: ", p2);

    std::pair<char, int> p4 { p2 };
    print("(4) Implicitly converted: ", p4);

    std::pair<std::complex<double>, std::string> p6 { std::piecewise_construct, std::forward_as_tuple(0.123, 7.7),
        std::forward_as_tuple(10, 'a') };
    print("(8) Piecewise constructed: ", p6);
}
