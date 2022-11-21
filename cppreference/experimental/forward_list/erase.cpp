// cppreference link https://en.cppreference.com/w/cpp/experimental/forward_list/erase
#include <experimental/forward_list>
#include <iostream>

auto show = [](const auto& container) {
    for (auto e : container) {
        std::cout << e;
    }
    std::cout << '\n';
};

int main()
{
    std::forward_list<int> data { 1, 1, 1, 4, 1, 1, 1, 2, 1, 1, 1 };
    show(data);
    std::experimental::erase(data, 1);
    show(data);
}
