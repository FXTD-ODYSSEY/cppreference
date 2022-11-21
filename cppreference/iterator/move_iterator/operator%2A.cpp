// cppreference link https://en.cppreference.com/w/cpp/iterator/move_iterator/operator*
#include <iomanip>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

void print(auto rem, auto const& v)
{
    for (std::cout << rem; auto const& e : v)
        std::cout << quoted(e) << ' ';
    std::cout << '\n';
}

int main()
{
    std::vector<std::string> p { "alpha", "beta", "gamma", "delta" }, q;
    print("1) p: ", p);
    for (std::move_iterator it { p.begin() }, end { p.end() }; it != end; ++it) {
        it->push_back('!'); // calls -> string::push_back(char)
        q.emplace_back(*it);
    }
    print("2) p: ", p);
    print("3) q: ", q);

    std::vector v { 1, 2, 3 };
    std::move_iterator it { v.begin() };
    // *it = 13; // error: using rvalue as lvalue
}
