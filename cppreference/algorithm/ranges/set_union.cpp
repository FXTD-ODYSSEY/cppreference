// cppreference link https://en.cppreference.com/w/cpp/algorithm/ranges/set_union
#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

void print(const auto& in1, const auto& in2, auto first, auto last)
{
    std::cout << "{ ";
    for (const auto& e : in1) {
        std::cout << e << ' ';
    }
    std::cout << "} ∪ { ";
    for (const auto& e : in2) {
        std::cout << e << ' ';
    }
    std::cout << "} =\n{ ";
    while (!(first == last)) {
        std::cout << *first++ << ' ';
    }
    std::cout << "}\n\n";
}

int main()
{
    std::vector<int> in1, in2, out;

    in1 = { 1, 2, 3, 4, 5 };
    in2 = { 3, 4, 5, 6, 7 };
    out.resize(in1.size() + in2.size());
    const auto ret = std::ranges::set_union(in1, in2, out.begin());
    print(in1, in2, out.begin(), ret.out);

    in1 = { 1, 2, 3, 4, 5, 5, 5 };
    in2 = { 3, 4, 5, 6, 7 };
    out.clear();
    out.reserve(in1.size() + in2.size());
    std::ranges::set_union(in1, in2, std::back_inserter(out));
    print(in1, in2, out.cbegin(), out.cend());
}
