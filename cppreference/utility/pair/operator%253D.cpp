// cppreference link https://en.cppreference.com/w/cpp/utility/pair/operator%3D
#include <iomanip>
#include <iostream>
#include <utility>
#include <vector>

template <class Os, class T>
Os& operator<<(Os& os, const std::vector<T>& v)
{
    os << "{";
    for (std::size_t t = 0; t != v.size(); ++t)
        os << v[t] << (t + 1 < v.size() ? "," : "");
    return os << "}";
}

template <class Os, class U1, class U2>
Os& operator<<(Os& os, const std::pair<U1, U2>& pair)
{
    return os << ":{ " << pair.first << ", " << pair.second << " } ";
}

int main()
{
    std::pair<int, std::vector<int>> p { 1, { 2 } }, q { 2, { 5, 6 } };

    p = q; // (1) operator=( const pair& other );
    std::cout << std::setw(23) << std::left
              << "(1) p = q;"
              << "p" << p << "   q" << q << '\n';

    std::pair<short, std::vector<int>> r { 4, { 7, 8, 9 } };
    p = r; // (3) operator=( const pair<U1,U2>& other );
    std::cout << std::setw(23)
              << "(3) p = r;"
              << "p" << p << " r" << r << '\n';

    p = std::pair<int, std::vector<int>> { 3, { 4 } };
    p = std::move(q); // (5) operator=( pair&& other );
    std::cout << std::setw(23)
              << "(5) p = std::move(q);"
              << "p" << p << "   q" << q << '\n';

    p = std::pair<int, std::vector<int>> { 5, { 6 } };
    p = std::move(r); // (7) operator=( pair<U1,U2>&& other );
    std::cout << std::setw(23)
              << "(7) p = std::move(r);"
              << "p" << p << " r" << r << '\n';
}
