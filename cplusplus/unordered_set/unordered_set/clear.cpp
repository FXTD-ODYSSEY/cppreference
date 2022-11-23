// cplusplus link https://cplusplus.com/reference/unordered_set\unordered_set\clear
// clearing unordered_set
#include <iostream>
#include <string>
#include <unordered_set>

int main()
{
    std::unordered_set<std::string> myset = { "chair", "table", "lamp", "sofa" };

    std::cout << "myset contains:";
    for (const std::string& x : myset)
        std::cout << " " << x;
    std::cout << std::endl;

    myset.clear();
    myset.insert("bed");
    myset.insert("wardrobe");
    myset.insert("nightstand");

    std::cout << "myset contains:";
    for (const std::string& x : myset)
        std::cout << " " << x;
    std::cout << std::endl;

    return 0;
}
