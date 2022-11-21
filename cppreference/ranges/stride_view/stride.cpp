// cppreference link https://en.cppreference.com/w/cpp/ranges/stride_view/stride
#include <ranges>

int main()
{
    constexpr auto view = std::views::iota(1337)
        | std::views::stride(42);
    static_assert(view.stride() == 42);
}
