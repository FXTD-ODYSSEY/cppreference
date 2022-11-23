// cplusplus link https://cplusplus.com/reference/unordered_set\unordered_multiset\reserve
// unordered_multiset::reserve
#include <iostream>
#include <string>
#include <unordered_set>

int main()
{
    std::unordered_multiset<std::string> myums;

    myums.reserve(5);

    myums.insert("klingon");
    myums.insert("human");
    myums.insert("vulcan");
    myums.insert("klingon");
    myums.insert("klingon");

    std::cout << "myums contains:";
    for (const std::string& x : myums)
        std::cout << " " << x;
    std::cout << std::endl;

    return 0;
}
