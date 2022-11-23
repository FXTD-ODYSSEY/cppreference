// cplusplus link https://cplusplus.com/reference/unordered_set\unordered_multiset\operator%3D
// unordered_multiset::operator=
#include <iostream>
#include <string>
#include <unordered_set>

template <class T>
T cmerge(T a, T b)
{
    T t(a);
    t.insert(b.begin(), b.end());
    return t;
}

int main()
{
    std::unordered_multiset<std::string> first, second, third;
    first = { "red", "green", "blue" }; // init list
    second = { "red", "yellow", "blue" }; // init list
    third = cmerge(first, second); // move
    first = third; // copy

    std::cout << "first contains:";
    for (const std::string& x : first)
        std::cout << " " << x;
    std::cout << std::endl;

    return 0;
}
