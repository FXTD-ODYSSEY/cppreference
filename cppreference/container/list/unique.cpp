// cppreference link https://en.cppreference.com/w/cpp/container/list/unique
#include <iostream>
#include <list>

auto print = [](auto remark, auto const& container) {
    std::cout << remark;
    for (auto const& val : container)
        std::cout << ' ' << val;
    std::cout << '\n';
};

int main()
{
    std::list<int> c = { 1, 2, 2, 3, 3, 2, 1, 1, 2 };
    print("Before unique():", c);
    const auto count1 = c.unique();
    print("After unique(): ", c);
    std::cout << count1 << " elements were removed\n";

    c = { 1, 2, 12, 23, 3, 2, 51, 1, 2, 2 };
    print("Before unique(pred):", c);
    const auto count2 = c.unique([mod = 10](int x, int y) {
        return (x % mod) == (y % mod);
    });
    print("After unique(pred): ", c);
    std::cout << count2 << " elements were removed\n";
}
