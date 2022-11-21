// cppreference link https://en.cppreference.com/w/cpp/experimental/optional/optional
#include <experimental/optional>
#include <iostream>
#include <string>
int main()
{
    std::experimental::optional<int> o1, // empty
        o2 = 1, // init from rvalue
        o3 = o2; // copy-constructor

    std::experimental::optional<std::string> o4(std::experimental::in_place,
        { 'a', 'b', 'c' });

    std::cout << *o2 << ' ' << *o3 << ' ' << *o4 << '\n';
}
