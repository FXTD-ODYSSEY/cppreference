// cppreference link https://en.cppreference.com/w/cpp/utility/pair/operator_cmp
#include <algorithm>
#include <iomanip>
#include <iostream>
#include <string>
#include <utility>
#include <vector>

int main()
{
    std::vector<std::pair<int, std::string>> v = { { 2, "baz" },
        { 2, "bar" },
        { 1, "foo" } };
    std::sort(v.begin(), v.end());

    for (auto p : v) {
        std::cout << "{" << p.first << ", " << std::quoted(p.second) << "}\n";
    }
}
