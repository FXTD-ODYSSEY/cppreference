// cppreference link https://en.cppreference.com/w/cpp/algorithm/lower_bound
#include <algorithm>
#include <iostream>
#include <vector>

struct PriceInfo {
    double price;
};

int main()
{
    const std::vector<int> data = { 1, 2, 4, 5, 5, 6 };

    for (int i = 0; i < 8; ++i) {
        // Search for first element x such that i ≤ x
        auto lower = std::lower_bound(data.begin(), data.end(), i);

        std::cout << i << " ≤ ";
        lower != data.end()
            ? std::cout << *lower << " at index " << std::distance(data.begin(), lower)
            : std::cout << "not found";
        std::cout << '\n';
    }

    std::vector<PriceInfo> prices = { { 100.0 }, { 101.5 }, { 102.5 }, { 102.5 }, { 107.3 } };

    for (double to_find : { 102.5, 110.2 }) {
        auto prc_info = std::lower_bound(prices.begin(), prices.end(), to_find,
            [](const PriceInfo& info, double value) {
                return info.price < value;
            });

        prc_info != prices.end()
            ? std::cout << prc_info->price << " at index " << prc_info - prices.begin()
            : std::cout << to_find << " not found";
        std::cout << '\n';
    }
}
