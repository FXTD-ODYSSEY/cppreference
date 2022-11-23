// cplusplus link https://cplusplus.com/reference/unordered_set\unordered_multiset\size
// unordered_multiset::size
#include <iostream>
#include <string>
#include <unordered_set>

int main()
{
    std::unordered_multiset<std::string> myset;
    std::cout << "0. size: " << myset.size() << std::endl;

    myset = { "house", "parking", "office" };
    std::cout << "1. size: " << myset.size() << std::endl;

    myset.insert("house");
    std::cout << "2. size: " << myset.size() << std::endl;

    myset.erase("house");
    std::cout << "3. size: " << myset.size() << std::endl;

    return 0;
}
