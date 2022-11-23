// cplusplus link https://cplusplus.com/reference/unordered_set\unordered_set\erase
// unordered_set::erase
#include <iostream>
#include <string>
#include <unordered_set>

int main()
{
    std::unordered_set<std::string> myset = { "USA", "Canada", "France", "UK", "Japan", "Germany", "Italy" };

    myset.erase(myset.begin()); // erasing by iterator
    myset.erase("France"); // erasing by key
    myset.erase(myset.find("Japan"), myset.end()); // erasing by range

    std::cout << "myset contains:";
    for (const std::string& x : myset)
        std::cout << " " << x;
    std::cout << std::endl;

    return 0;
}
