// cplusplus link https://cplusplus.com/reference/unordered_set\unordered_set\size
// unordered_set::size
#include <iostream>
#include <string>
#include <unordered_set>

int main()
{
    std::unordered_set<std::string> myset;
    std::cout << "0. size: " << myset.size() << std::endl;

    myset = { "milk", "potatoes", "eggs" };
    std::cout << "1. size: " << myset.size() << std::endl;

    myset.insert("pineapple");
    std::cout << "2. size: " << myset.size() << std::endl;

    myset.erase("milk");
    std::cout << "3. size: " << myset.size() << std::endl;

    return 0;
}
