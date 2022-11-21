// cppreference link https://en.cppreference.com/w/cpp/container/multimap/insert
#include <functional>
#include <iostream>
#include <map>
#include <string>
#include <string_view>
#include <utility>

template <class M>
void print(const std::string_view rem, const M& mmap)
{
    std::cout << rem << " ";
    for (const auto& e : mmap)
        std::cout << "{" << e.first << "," << e.second << "} ";
    std::cout << '\n';
}

int main()
{
    // list-initialize
    std::multimap<int, std::string, std::greater<int>> mmap { { 2, "foo" }, { 2, "bar" }, { 3, "baz" }, { 1, "abc" }, { 5, "def" } };
    print("#1", mmap);

    // insert using value_type
    mmap.insert(decltype(mmap)::value_type(5, "pqr"));
    print("#2", mmap);

    // insert using pair
    mmap.insert(std::pair { 6, "uvw" });
    print("#3", mmap);

    mmap.insert({ 7, "xyz" });
    print("#4", mmap);

    // insert using initializer_list
    mmap.insert({ { 5, "one" }, { 5, "two" } });
    print("#5", mmap);

    // insert using a pair of iterators
    mmap.clear();
    const auto il = { std::pair { 1, "ä" }, { 2, "ё" }, { 2, "ö" }, { 3, "ü" } };
    mmap.insert(il.begin(), il.end());
    print("#6", mmap);
}
