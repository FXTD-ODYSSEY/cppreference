// cppreference link https://en.cppreference.com/w/cpp/iterator/move_iterator/iter_move
#include <iomanip>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

void print(auto const& rem, auto const& v)
{
    std::cout << rem << "[" << size(v) << "] { ";
    for (int o {}; auto const& s : v)
        std::cout << (o++ == 0 ? "" : ", ") << quoted(s);
    std::cout << " }\n";
}

int main()
{
    std::vector<std::string> p { "Andromeda", "Cassiopeia", "Phoenix" }, q;

    print("p", p), print("q", q);

    using MI = std::move_iterator<std::vector<std::string>::iterator>;

    for (MI first { p.begin() }, last { p.end() }; first != last; ++first) {
        q.emplace_back(/* ADL */ iter_move(first));
    }

    print("p", p), print("q", q);
}
