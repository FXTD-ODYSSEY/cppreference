// cppreference link https://en.cppreference.com/w/cpp/container/span/back
#include <iostream>
#include <span>

void print_forward(std::span<const int> const span)
{
    for (auto n { span.size() }; n != 0; --n) {
        std::cout << span.last(n).front() << ' ';
    }
    std::cout << '\n';
}

void print_backward(std::span<const int> const span)
{
    for (auto n { span.size() }; n != 0; --n) {
        std::cout << span.first(n).back() << ' ';
    }
    std::cout << '\n';
}

int main()
{
    constexpr int numbers[] { 0, 1, 2, 3, 4 };
    print_forward(numbers);
    print_backward(numbers);
}
