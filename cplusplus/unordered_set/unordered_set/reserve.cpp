// cplusplus link https://cplusplus.com/reference/unordered_set\unordered_set\reserve
// unordered_set::reserve
#include <iostream>
#include <string>
#include <unordered_set>

int main()
{
    std::unordered_set<std::string> myset;

    myset.reserve(5);

    myset.insert("office");
    myset.insert("house");
    myset.insert("gym");
    myset.insert("parking");
    myset.insert("highway");

    std::cout << "myset contains:";
    for (const std::string& x : myset)
        std::cout << " " << x;
    std::cout << std::endl;

    return 0;
}
