// cppreference link https://en.cppreference.com/w/cpp/algorithm/move_backward
#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>
#include <string_view>
#include <vector>

using container = std::vector<std::string>;

void print(std::string_view comment, const container& src, const container& dst = {})
{
    auto prn = [](std::string_view name, const container& cont) {
        std::cout << name;
        for (const auto& s : cont) {
            std::cout << (s.empty() ? "∙" : s.data()) << ' ';
        }
        std::cout << '\n';
    };
    std::cout << comment << '\n';
    prn("src: ", src);
    if (dst.empty())
        return;
    prn("dst: ", dst);
}

int main()
{
    container src { "foo", "bar", "baz" };
    container dst { "qux", "quux", "quuz", "corge" };
    print("Non-overlapping case; before move_backward:", src, dst);
    std::move_backward(src.begin(), src.end(), dst.end());
    print("After:", src, dst);

    src = { "snap", "crackle", "pop", "lock", "drop" };
    print("Overlapping case; before move_backward:", src);
    std::move_backward(src.begin(), std::next(src.begin(), 3), src.end());
    print("After:", src);
}
