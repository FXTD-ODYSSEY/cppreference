// cppreference link https://en.cppreference.com/w/cpp/experimental/optional/value
#include <experimental/optional>
#include <iostream>
int main()
{
    std::experimental::optional<int> opt = {};

    try {
        int n = opt.value();
    } catch (const std::logic_error& e) {
        std::cout << e.what() << '\n';
    }
}
