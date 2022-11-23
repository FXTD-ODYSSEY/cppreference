// cplusplus link https://cplusplus.com/reference/unordered_map\unordered_multimap\clear
// clearing unordered_multimap
#include <iostream>
#include <string>
#include <unordered_map>

int main()
{
    std::unordered_multimap<std::string, std::string> myumm = { { "Tom", "Produce" }, { "Bob", "Toys" }, { "Bob", "Garden" } };

    std::cout << "myumm contains:";
    for (auto& x : myumm)
        std::cout << " " << x.first << ":" << x.second;
    std::cout << std::endl;

    myumm.clear();
    myumm.insert(std::make_pair("Bob", "Jail"));

    std::cout << "myumm contains:";
    for (auto& x : myumm)
        std::cout << " " << x.first << ":" << x.second;
    std::cout << std::endl;

    return 0;
}
