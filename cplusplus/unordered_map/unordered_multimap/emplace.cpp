// cplusplus link https://cplusplus.com/reference/unordered_map\unordered_multimap\emplace
// unordered_multimap::emplace
#include <iostream>
#include <string>
#include <unordered_map>

int main()
{
    std::unordered_multimap<std::string, std::string> myumm;

    myumm.emplace("NCC-1701", "C. Pike");
    myumm.emplace("NCC-1701", "J.T. Kirk");
    myumm.emplace("NCC-1701-D", "J.L. Picard");
    myumm.emplace("NCC-74656", "K. Janeway");

    std::cout << "myumm contains:" << std::endl;
    for (auto& x : myumm)
        std::cout << x.first << ": " << x.second << std::endl;

    std::cout << std::endl;
    return 0;
}
