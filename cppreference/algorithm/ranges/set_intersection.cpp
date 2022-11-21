// cppreference link https://en.cppreference.com/w/cpp/algorithm/ranges/set_intersection
#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

void print(const auto& v, const auto& rem)
{
    std::cout << "{ ";
    for (const auto& e : v)
        std::cout << e << ' ';
    std::cout << "}" << rem;
}

int main()
{
    const auto in1 = { 1, 2, 2, 3, 4, 5, 6 };
    const auto in2 = { 2, 2, 3, 3, 5, 7 };
    std::vector<int> out;

    std::ranges::set_intersection(in1, in2, std::back_inserter(out));

    print(in1, " ∩ "), print(in2, " = "), print(out, "\n");
}
