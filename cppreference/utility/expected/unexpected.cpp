// cppreference link https://en.cppreference.com/w/cpp/utility/expected/unexpected
#include <expected>
#include <iostream>

int main()
{
    std::expected<double, int> ex = std::unexpected(3);

    if (!ex) {
        std::cout << "ex contains an error value\n";
    }

    if (ex == std::unexpected(3)) {
        std::cout << "The error value is equal to 3\n";
    }
}
