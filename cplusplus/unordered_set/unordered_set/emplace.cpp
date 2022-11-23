// cplusplus link https://cplusplus.com/reference/unordered_set\unordered_set\emplace
// unordered_set::emplace
#include <iostream>
#include <string>
#include <unordered_set>

int main()
{
    std::unordered_set<std::string> myset;

    myset.emplace("potatoes");
    myset.emplace("milk");
    myset.emplace("flour");

    std::cout << "myset contains:";
    for (const std::string& x : myset)
        std::cout << " " << x;

    std::cout << std::endl;
    return 0;
}
