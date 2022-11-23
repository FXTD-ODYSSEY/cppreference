// cplusplus link https://cplusplus.com/reference/unordered_map\unordered_multimap\bucket
// unordered_multimap::bucket
#include <iostream>
#include <string>
#include <unordered_map>

int main()
{
    std::unordered_multimap<std::string, std::string> myumm = {
        { "John", "Middle East" },
        { "John", "Africa" },
        { "Adam", "Europe" },
        { "Bill", "Norh-America" }
    };

    for (auto& x : myumm) {
        std::cout << "Element [" << x.first << ":" << x.second << "]";
        std::cout << " is in bucket #" << myumm.bucket(x.first) << std::endl;
    }

    return 0;
}
