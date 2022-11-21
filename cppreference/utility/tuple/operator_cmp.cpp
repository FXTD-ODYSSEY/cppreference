// cppreference link https://en.cppreference.com/w/cpp/utility/tuple/operator_cmp
#include <algorithm>
#include <iostream>
#include <tuple>
#include <vector>
int main()
{
    std::vector<std::tuple<int, std::string, float>> v {
        { 2, "baz", -0.1 },
        { 2, "bar", 3.14 },
        { 1, "foo", 10.1 },
        { 2, "baz", -1.1 },
    };
    std::sort(v.begin(), v.end());

    for (const auto& p : v) {
        std::cout << "{" << std::get<0>(p) << ", " << std::get<1>(p)
                  << ", " << std::get<2>(p) << "}\n";
    }
}
