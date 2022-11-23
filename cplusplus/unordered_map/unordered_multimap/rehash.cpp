// cplusplus link https://cplusplus.com/reference/unordered_map\unordered_multimap\rehash
// unordered_multimap::max_load_factor
#include <iostream>
#include <string>
#include <unordered_map>

int main()
{

    std::unordered_multimap<std::string, std::string> myumm;

    myumm.rehash(20);

    myumm.insert({ { "apple", "NY" }, { "apple", "WA" }, { "peach", "GA" } });
    myumm.insert({ { "orange", "FL" }, { "cherry", "UT" } });
    myumm.insert({ { "strawberry", "LA" }, { "strawberry", "NC" } });

    std::cout << "current bucket_count: " << myumm.bucket_count() << std::endl;

    return 0;
}
