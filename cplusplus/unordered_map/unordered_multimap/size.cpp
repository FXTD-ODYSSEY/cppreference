// cplusplus link https://cplusplus.com/reference/unordered_map\unordered_multimap\size
// unordered_multimap::size
#include <iostream>
#include <string>
#include <unordered_map>

int main()
{
    std::unordered_multimap<std::string, std::string> myumm = {
        { "Smith", "Pharmacy" },
        { "Jones", "Library" },
        { "Dole", "Church" },
        { "Smith", "Office" }
    };

    std::cout << "myumm.size() is " << myumm.size() << std::endl;

    return 0;
}
