// cplusplus link https://cplusplus.com/reference/unordered_set\unordered_multiset\emplace
// unordered_multiset::emplace
#include <iostream>
#include <string>
#include <unordered_set>

int main()
{
    std::unordered_multiset<std::string> myums;

    myums.emplace("milk");
    myums.emplace("tea");
    myums.emplace("coffee");
    myums.emplace("milk");

    std::cout << "myums contains:";
    for (const std::string& x : myums)
        std::cout << " " << x;

    std::cout << std::endl;
    return 0;
}
