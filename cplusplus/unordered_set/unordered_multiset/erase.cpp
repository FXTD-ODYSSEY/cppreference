// cplusplus link https://cplusplus.com/reference/unordered_set\unordered_multiset\erase
// unordered_multiset::erase
#include <iostream>
#include <string>
#include <unordered_set>

int main()
{
    std::unordered_multiset<std::string> myums = { "fish", "duck", "cow", "cow", "pig", "hen", "sheep" };

    myums.erase(myums.begin()); // erasing by iterator
    myums.erase("sheep"); // erasing by key
    myums.erase(myums.find("fish"), myums.end()); // erasing by range

    std::cout << "myums contains:";
    for (const std::string& x : myums)
        std::cout << " " << x;
    std::cout << std::endl;

    return 0;
}
