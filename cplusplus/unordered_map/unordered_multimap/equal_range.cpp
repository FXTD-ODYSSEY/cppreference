// cplusplus link https://cplusplus.com/reference/unordered_map\unordered_multimap\equal_range
// unordered_multimap::equal_range
#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>

typedef std::unordered_multimap<std::string, std::string> stringmap;

int main()
{
    stringmap myumm = {
        { "orange", "FL" },
        { "strawberry", "LA" },
        { "strawberry", "OK" },
        { "pumpkin", "NH" }
    };

    std::cout << "Entries with strawberry:";
    auto range = myumm.equal_range("strawberry");
    for_each(
        range.first,
        range.second,
        [](stringmap::value_type& x) { std::cout << " " << x.second; });

    return 0;
}
