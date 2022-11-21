// cppreference link https://en.cppreference.com/w/cpp/container/multimap/merge
#include <iostream>
#include <map>
#include <string>

int main()
{
    std::multimap<int, std::string> ma { { 1, "apple" }, { 5, "pear" }, { 10, "banana" } };
    std::multimap<int, std::string> mb { { 2, "zorro" }, { 4, "batman" }, { 5, "X" }, { 8, "alpaca" } };
    std::multimap<int, std::string> u;
    u.merge(ma);
    std::cout << "ma.size(): " << ma.size() << '\n';
    u.merge(mb);
    std::cout << "mb.size(): " << mb.size() << '\n';

    for (auto const& kv : u)
        std::cout << kv.first << ", " << kv.second << '\n';
}
