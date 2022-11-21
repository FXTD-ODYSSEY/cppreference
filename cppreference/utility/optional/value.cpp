// cppreference link https://en.cppreference.com/w/cpp/utility/optional/value
#include <iostream>
#include <optional>
int main()
{
    std::optional<int> opt = {};

    try {
        [[maybe_unused]] int n = opt.value();
    } catch (const std::bad_optional_access& e) {
        std::cout << e.what() << '\n';
    }
    try {
        opt.value() = 42;
    } catch (const std::bad_optional_access& e) {
        std::cout << e.what() << '\n';
    }

    opt = 43;
    std::cout << *opt << '\n';

    opt.value() = 44;
    std::cout << opt.value() << '\n';
}
