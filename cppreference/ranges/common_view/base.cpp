// cppreference link https://en.cppreference.com/w/cpp/ranges/common_view/base
#include <iostream>
#include <ranges>
#include <string>

int main()
{
    std::string str { "C++20" };
    auto view = std::views::common(str);

    std::string copy_of_str = view.base();
    std::cout << "copy of str: [" << copy_of_str << "]\n";
    std::cout << "view.base(): [" << view.base() << "]\n";

    std::string move_str = std::move(view.base());
    std::cout << "moved str:   [" << move_str << "]\n";
    std::cout << "view.base(): [" << view.base() << "]\n"; // unspecified
}
