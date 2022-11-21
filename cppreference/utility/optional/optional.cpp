// cppreference link https://en.cppreference.com/w/cpp/utility/optional/optional
#include <iostream>
#include <optional>
#include <string>
int main()
{
    std::optional<int> o1, // empty
        o2 = 1, // init from rvalue
        o3 = o2; // copy-constructor

    // calls std::string( initializer_list<CharT> ) constructor
    std::optional<std::string> o4(std::in_place, { 'a', 'b', 'c' });

    // calls std::string( size_type count, CharT ch ) constructor
    std::optional<std::string> o5(std::in_place, 3, 'A');

    // Move-constructed from std::string using deduction guide to pick the type

    std::optional o6(std::string { "deduction" });

    std::cout << *o2 << ' ' << *o3 << ' ' << *o4 << ' ' << *o5 << ' ' << *o6 << '\n';
}
