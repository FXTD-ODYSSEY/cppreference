// cppreference link https://en.cppreference.com/w/cpp/iterator/move_iterator/operator_at
#include <iomanip>
#include <iostream>
#include <iterator>
#include <list>
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

    std::move_iterator it { p.begin() };

    for (size_t t { 0U }; t != p.size(); ++t) {
        q.emplace_back(it[t]);
    }

    print("2) p: ", p);
    print("3) q: ", q);

    std::list l { 1, 2, 3 };
    std::move_iterator it2 { l.begin() };
    //  it2[1] = 13;   // compilation error ~ the underlying iterator
    // does not model the random access iterator
    //  *it2 = 999;    // compilation error: using rvalue as lvalue
}
