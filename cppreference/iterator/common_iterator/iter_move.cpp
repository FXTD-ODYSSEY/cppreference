// cppreference link https://en.cppreference.com/w/cpp/iterator/common_iterator/iter_move
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

    using CI = std::common_iterator<
        std::counted_iterator<std::vector<std::string>::iterator>,
        std::default_sentinel_t>;
    CI last { std::default_sentinel };

    for (CI first { { p.begin(), 2 } }; first != last; ++first) {
        q.emplace_back(/* ADL */ iter_move(first));
    }

    print("p", p), print("q", q);
}
