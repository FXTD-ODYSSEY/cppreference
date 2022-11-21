// cppreference link https://en.cppreference.com/w/cpp/iterator/counted_iterator
#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>
using std::operator""s;

void print(auto const remark, auto const& v)
{
    const auto size = std::ssize(v);
    std::cout << remark << "[" << size << "] { ";
    for (auto it = std::counted_iterator { std::cbegin(v), size };
         it != std::default_sentinel; ++it) {
        std::cout << *it << ", ";
    }
    std::cout << "}\n";
}

int main()
{
    const auto src = { "Arcturus"s, "Betelgeuse"s, "Canopus"s, "Deneb"s, "Elnath"s };
    print("src", src);
    std::vector<decltype(src)::value_type> dst;
    std::ranges::copy(std::counted_iterator { src.begin(), 3 },
        std::default_sentinel,
        std::back_inserter(dst));
    print("dst", dst);
}
