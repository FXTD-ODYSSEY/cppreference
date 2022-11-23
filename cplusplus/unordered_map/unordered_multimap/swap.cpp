// cplusplus link https://cplusplus.com/reference/unordered_map\unordered_multimap\swap
// unordered_multimap::swap
#include <iostream>
#include <string>
#include <unordered_map>

int main()
{
    std::unordered_multimap<std::string, std::string>
        a = { { "orange", "FL" }, { "apple", "NY" }, { "apple", "WA" } },
        b = { { "strawberry", "LA" }, { "strawberry", "NC" }, { "pear", "OR" } };

    a.swap(b);

    std::cout << "a: ";
    for (auto& x : a)
        std::cout << " " << x.first << ":" << x.second;
    std::cout << std::endl;

    std::cout << "b: ";
    for (auto& x : b)
        std::cout << " " << x.first << ":" << x.second;
    std::cout << std::endl;

    return 0;
}
