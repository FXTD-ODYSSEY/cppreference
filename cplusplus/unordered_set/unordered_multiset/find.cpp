// cplusplus link https://cplusplus.com/reference/unordered_set\unordered_multiset\find
// unordered_multiset::find
#include <iostream>
#include <string>
#include <unordered_set>

int main()
{
    std::unordered_multiset<std::string> myums = { "cow", "cow", "pig", "sheep", "pig" };

    std::unordered_multiset<std::string>::iterator it = myums.find("pig");

    if (it != myums.end())
        std::cout << *it << " found" << std::endl;

    return 0;
}
