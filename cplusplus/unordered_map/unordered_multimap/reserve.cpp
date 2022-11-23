// cplusplus link https://cplusplus.com/reference/unordered_map\unordered_multimap\reserve
// unordered_multimap::reserve
#include <iostream>
#include <string>
#include <unordered_map>

int main()
{

    std::unordered_multimap<std::string, std::string> myumm;

    myumm.reserve(7);

    myumm.insert({ { "apple", "NY" }, { "apple", "WA" }, { "peach", "GA" } });
    myumm.insert({ { "orange", "FL" }, { "cherry", "UT" } });
    myumm.insert({ { "strawberry", "LA" }, { "strawberry", "NC" } });

    for (auto& x : myumm) {
        std::cout << x.first << ": " << x.second << std::endl;
    }

    return 0;
}
