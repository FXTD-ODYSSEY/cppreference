// cppreference link https://en.cppreference.com/w/cpp/algorithm/ranges/set_difference
#include <algorithm>
#include <cassert>
#include <iostream>
#include <iterator>
#include <string_view>
#include <vector>

auto print = [](const auto& v, std::string_view end = "") {
    for (std::cout << "{ "; auto i : v)
        std::cout << i << ' ';
    std::cout << "} " << end;
};

struct Order // a struct with some very interesting data
{
    int order_id;

    friend std::ostream& operator<<(std::ostream& os, const Order& ord)
    {
        return os << "{" << ord.order_id << "},";
    }
};

int main()
{
    const auto v1 = { 1, 2, 5, 5, 5, 9 };
    const auto v2 = { 2, 5, 7 };
    std::vector<int> diff;

    std::ranges::set_difference(v1, v2, std::back_inserter(diff));
    print(v1, "∖ ");
    print(v2, "= ");
    print(diff, "\n");

    // we want to know which orders "cut" between old and new states:
    const std::vector<Order> old_orders {
        { 1 },
        { 2 },
        { 5 },
        { 9 },
    };
    const std::vector<Order> new_orders {
        { 2 },
        { 5 },
        { 7 },
    };
    std::vector<Order> cut_orders(old_orders.size() + new_orders.size());

    auto [old_orders_end, cut_orders_last] = std::ranges::set_difference(old_orders, new_orders,
        cut_orders.begin(), {},
        &Order::order_id, &Order::order_id);
    assert(old_orders_end == old_orders.end());

    std::cout << "old orders = ";
    print(old_orders, "\n");
    std::cout << "new orders = ";
    print(new_orders, "\n");
    std::cout << "cut orders = ";
    print(cut_orders, "\n");
    cut_orders.erase(cut_orders_last, end(cut_orders));
    std::cout << "cut orders = ";
    print(cut_orders, "\n");
}
