// cppreference link https://en.cppreference.com/w/cpp/container/span/front
#include <iostream>
#include <span>

void print(std::span<const int> const data)
{
    for (auto offset { 0U }; offset != data.size(); ++offset) {
        std::cout << data.subspan(offset).front() << ' ';
    }
    std::cout << '\n';
}

int main()
{
    constexpr int data[] { 0, 1, 2, 3, 4, 5, 6 };
    print({ data, 4 });
}
