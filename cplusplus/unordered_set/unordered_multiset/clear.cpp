// cplusplus link https://cplusplus.com/reference/unordered_set\unordered_multiset\clear
// unordered_multiset::clear
#include <iostream>
#include <string>
#include <unordered_set>

int main()
{
    std::unordered_multiset<std::string> myums = { "chair", "table", "lamp", "sofa", "chair" };

    std::cout << "myums contains:";
    for (const std::string& x : myums)
        std::cout << " " << x;
    std::cout << std::endl;

    myums.clear();
    myums.insert("bed");
    myums.insert("bed");
    myums.insert("wardrobe");
    myums.insert("nightstand");

    std::cout << "myums contains:";
    for (const std::string& x : myums)
        std::cout << " " << x;
    std::cout << std::endl;

    return 0;
}
