// cppreference link https://en.cppreference.com/w/cpp/experimental/vector/erase_if
#include <experimental/vector>
#include <iostream>

template <typename Os, typename Container>
inline Os& operator<<(Os& os, Container const& container)
{
    os << "{ ";
    for (const auto& item : container) {
        os << item << ' ';
    }
    return os << "}";
}

int main()
{
    std::vector<int> data { 3, 3, 4, 5, 5, 6, 6, 7, 2, 1, 0 };

    std::cout << "Original:\n"
              << data << '\n';

    auto divisible_by_3 = [](auto const& x) { return (x % 3) == 0; };

    std::experimental::erase_if(data, divisible_by_3);

    std::cout << "Erase all items divisible by 3:\n"
              << data << '\n';
}
