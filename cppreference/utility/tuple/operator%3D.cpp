// cppreference link https://en.cppreference.com/w/cpp/utility/tuple/operator%3D
#include <iostream>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

// helper function to print std::vector
template <class Os, class T>
Os& operator<<(Os& os, std::vector<T> const& v)
{
    os << "{";
    for (std::size_t t = 0; t != v.size(); ++t)
        os << v[t] << (t + 1 < v.size() ? "," : "");
    return os << "}";
}

// helpers to print a tuple of any size
template <class Os, class... Args>
Os& operator<<(Os& os, const std::tuple<Args...>& t)
{
    os << "{ ";
    std::apply([&](auto&& arg, auto&&... args) {
        os << arg;
        ((os << ", " << args), ...);
    },
        t);
    return os << " }";
}

struct line {
    int len { 60 };
};
template <class Os>
Os& operator<<(Os& os, line l)
{
    while (l.len-- > 0)
        std::cout << "─";
    return os << '\n';
}

int main()
{
    // Tuple to tuple examples //
    std::tuple<int, std::string, std::vector<int>>
        t1 { 1, "alpha", { 1, 2, 3 } },
        t2 { 2, "beta", { 4, 5 } };

    // Normal copy assignment
    // operator=( const tuple& other );
    std::cout << "t1 = " << t1 << ", t2 = " << t2 << '\n';
    t1 = t2;
    std::cout << "t1 = t2;\n"
                 "t1 = "
              << t1 << ", t2 = " << t2 << '\n'
              << line {};

    // Normal move assignment
    // operator=( tuple&& other );
    t1 = std::move(t2);
    std::cout << "t1 = std::move(t2);\n"
                 "t1 = "
              << t1 << ", t2 = " << t2 << '\n'
              << line {};

    // Converting copy assignment
    // operator=( const tuple<UTypes...>& other );
    std::tuple<short, const char*, std::vector<int>> t3 { 3, "gamma", { 6, 7, 8 } };
    t1 = t3;
    std::cout << "t1 = t3; \n"
                 "t1 = "
              << t1 << ", t3 = " << t3 << '\n'
              << line {};

    // Converting move assignment
    // operator=( tuple<UTypes...>&& other );
    t1 = std::move(t3);
    std::cout << "t1 = std::move(t3);\n"
                 "t1 = "
              << t1 << ", t3 = " << t3 << '\n'
              << line {};

    // Pair to tuple examples //
    std::tuple<std::string, std::vector<int>> t4 { "delta", { 10, 11, 12 } };
    std::pair<const char*, std::vector<int>> p1 { "epsilon", { 14, 15, 16 } };

    // Converting copy assignment from std::pair
    // operator=( const std::pair<U1,U2>& p );
    std::cout << "t4 = " << t4 << ", "
              << "p1 = { " << p1.first << ", " << p1.second << " };\n";
    t4 = p1;
    std::cout << "t4 = p1;\n"
                 "t4 = "
              << t4
              << ", p1 = { " << p1.first << ", " << p1.second << " };\n"
              << line {};

    // Converting move assignment from std::pair
    // operator=( std::pair<U1,U2>&& p );
    t4 = std::move(p1);
    std::cout << "t4 = std::move(p1);\n"
                 "t4 = "
              << t4
              << ", p1 = { " << p1.first << ", " << p1.second << " };\n"
              << line {};

#ifdef __cpp_lib_ranges_zip
    // Const tuple-of-proxies assignment example
    std::vector<bool> v({ false, true });
    const std::tuple<std::vector<bool>::reference> t0_const { v[0] }, t1_const { v[1] };
    t0_const = t1_const;
    std::cout << std::boolalpha << "t0_const = t1_const;\n"
                                   "t0_const = "
              << t0_const
              << ", t1_const = " << t1_const << '\n';
#endif
}
