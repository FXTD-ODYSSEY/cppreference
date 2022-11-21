// cppreference link https://en.cppreference.com/w/cpp/container/span/size_bytes
#include <cstdint>
#include <span>

int main()
{
    static constexpr std::int32_t a[] { 1, 2, 3, 4, 5 };
    constexpr std::span s { a };

    static_assert(sizeof(int32_t) == 4);
    static_assert(std::size(a) == 5);
    static_assert(sizeof(a) == 20);
    static_assert(s.size() == 5);
    static_assert(s.size_bytes() == 20);
}
