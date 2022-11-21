// cppreference link https://en.cppreference.com/w/cpp/experimental/optional/operator*
#include <experimental/optional>
#include <iostream>
#include <string>
using namespace std::literals;
int main()
{
    std::experimental::optional<int> opt1 = 1;
    std::cout << *opt1 << '\n';

    std::experimental::optional<std::string> opt2 = "abc"s;
    std::cout << opt2->size() << '\n';
}
