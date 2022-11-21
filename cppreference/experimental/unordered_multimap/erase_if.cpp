// cppreference link https://en.cppreference.com/w/cpp/experimental/unordered_multimap/erase_if
#include <experimental/unordered_map>
#include <iostream>

template <typename Os, typename Container>
inline Os& operator<<(Os& os, Container const& cont)
{
    os << "{";
    for (const auto& item : cont) {
        os << "{" << item.first << ", " << item.second << "}";
    }
    return os << "}";
}

int main()
{
    std::unordered_multimap<int, char> data { { 1, 'a' }, { 2, 'b' }, { 3, 'c' }, { 4, 'd' },
        { 5, 'e' }, { 4, 'f' }, { 5, 'g' }, { 5, 'g' } };
    std::cout << "Original:\n"
              << data << '\n';

    std::experimental::erase_if(data, [](const auto& item) {
        return (item.first & 1) == 1;
    });

    std::cout << "Erase items with odd keys:\n"
              << data << '\n';
}
