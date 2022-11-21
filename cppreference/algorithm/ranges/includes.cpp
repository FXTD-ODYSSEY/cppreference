// cppreference link https://en.cppreference.com/w/cpp/algorithm/ranges/includes
#include <algorithm>
#include <cctype>
#include <initializer_list>
#include <iomanip>
#include <iostream>
#include <locale>
#include <string>

template <class T>
std::ostream& operator<<(std::ostream& os, std::initializer_list<T> const& list)
{
    for (os << "{ "; auto const& elem : list)
        os << elem << ' ';
    return os << "} ";
}

struct true_false : std::numpunct<char> {
    std::string do_truename() const { return "? Yes\n"; }
    std::string do_falsename() const { return "? No\n"; }
};

int main()
{
    std::cout.imbue(std::locale(std::cout.getloc(), new true_false));

    auto ignore_case = [](char a, char b) { return std::tolower(a) < std::tolower(b); };

    const auto
        a
        = { 'a', 'b', 'c' },
        b = { 'a', 'c' },
        c = { 'a', 'a', 'b' },
        d = { 'g' },
        e = { 'a', 'c', 'g' },
        f = { 'A', 'B', 'C' },
        z = { 'a', 'b', 'c', 'f', 'h', 'x' };

    std::cout
        << z << "includes\n"
        << std::boolalpha
        << a << std::ranges::includes(z.begin(), z.end(), a.begin(), a.end())
        << b << std::ranges::includes(z, b)
        << c << std::ranges::includes(z, c)
        << d << std::ranges::includes(z, d)
        << e << std::ranges::includes(z, e)
        << f << std::ranges::includes(z, f, ignore_case);
}
