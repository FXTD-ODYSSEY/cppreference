// cppreference link https://en.cppreference.com/w/cpp/utility/tuple/swap2
#include <iostream>
#include <string>
#include <tuple>

int main()
{
    std::tuple<int, std::string, float>
        p1 { 42, "ABCD", 2.71 },
        p2;
    p2 = std::make_tuple(10, "1234", 3.14);

    auto print_p1_p2 = [&](auto rem) {
        std::cout << rem
                  << "p1 = {" << std::get<0>(p1)
                  << ", " << std::get<1>(p1)
                  << ", " << std::get<2>(p1) << "}, "
                  << "p2 = {" << std::get<0>(p2)
                  << ", " << std::get<1>(p2)
                  << ", " << std::get<2>(p2) << "}\n";
    };

    print_p1_p2("Before p1.swap(p2): ");
    p1.swap(p2);
    print_p1_p2("After  p1.swap(p2): ");
    swap(p1, p2);
    print_p1_p2("After swap(p1, p2): ");
}
