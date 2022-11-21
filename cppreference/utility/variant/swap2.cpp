// cppreference link https://en.cppreference.com/w/cpp/utility/variant/swap2
#include <iostream>
#include <string>
#include <variant>

auto print = [](auto const& v, char term = '\n') {
    std::visit([](auto&& o) { std::cout << o; }, v);
    std::cout << term;
};

int main()
{
    std::variant<int, std::string> v1 { 123 }, v2 { "XYZ" };
    print(v1, ' ');
    print(v2);

    std::swap(v1, v2);
    print(v1, ' ');
    print(v2);

    std::variant<double, std::string> v3 { 3.14 };
    // std::swap(v1, v3); // ERROR: ~ inconsistent parameter packs
}
