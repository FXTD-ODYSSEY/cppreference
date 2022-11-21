// cppreference link https://en.cppreference.com/w/cpp/container/span/operator_at
#include <iostream>
#include <span>
#include <utility>

void reverse(std::span<int> span)
{
    for (std::size_t i = 0, j = std::size(span); i < j; ++i) {
        --j;
        std::swap(span[i], span[j]);
    }
}

void print(std::span<const int> const span)
{
    for (int element : span) {
        std::cout << element << ' ';
    }
    std::cout << '\n';
}

int main()
{
    int data[] { 1, 2, 3, 4, 5 };
    print(data);
    reverse(data);
    print(data);
}
