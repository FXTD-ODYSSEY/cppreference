// cppreference link https://en.cppreference.com/w/cpp/iterator/counted_iterator/iter_move
#include <iomanip>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

void print(auto const& rem, auto const& v)
{
    for (std::cout << rem << "[" << size(v) << "] { "; auto const& s : v)
        std::cout << quoted(s) << " ";
    std::cout << "}\n";
}

int main()
{
    std::vector<std::string> p { "Alpha", "Bravo", "Charlie" }, q;

    print("p", p), print("q", q);

    using RI = std::counted_iterator<std::vector<std::string>::iterator>;

    for (RI iter { p.begin(), 2 }; iter != std::default_sentinel; ++iter) {
        q.emplace_back(/* ADL */ iter_move(iter));
    }

    print("p", p), print("q", q);
}
