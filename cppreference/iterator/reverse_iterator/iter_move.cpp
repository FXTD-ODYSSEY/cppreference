// cppreference link https://en.cppreference.com/w/cpp/iterator/reverse_iterator/iter_move
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

    using RI = std::reverse_iterator<std::vector<std::string>::iterator>;

    for (RI iter { p.rbegin() }, rend { p.rend() }; iter != rend; ++iter) {
        q.emplace_back(/* ADL */ iter_move(iter));
    }

    print("p", p), print("q", q);
}
