// cppreference link https://en.cppreference.com/w/cpp/ranges/chunk_by_view
#include <functional>
#include <iostream>
#include <ranges>
#include <string_view>
#include <vector>

void print_chunks(auto view, std::string_view separator = " ")
{
    for (auto const subrange : view) {
        std::cout << "[";
        for (std::string_view prefix = ""; auto const& elem : subrange) {
            std::cout << prefix << elem;
            prefix = separator;
        }
        std::cout << "] ";
    }
    std::cout << '\n';
}

int main()
{
    {
        auto v = std::vector { 1, 2, 3, 1, 2, 3, 3, 3, 1, 2, 3 };
        auto fun = std::ranges::less {};
        auto view = v | std::views::chunk_by(fun);
        print_chunks(view);
    }
    {
        auto v = std::vector { 1, 2, 3, 4, 4, 0, 2, 3, 3, 3, 2, 1 };
        auto fun = std::not_fn(std::ranges::equal_to {}); // or ranges::not_equal_to
        auto view = v | std::views::chunk_by(fun);
        print_chunks(view);
    }
    {
        std::string v = "__cpp_lib_ranges_chunk_by";
        auto fun = [](char x, char y) { return not(x == '_' or y == '_'); };
        auto view = v | std::views::chunk_by(fun);
        print_chunks(view, "");
    }
}
