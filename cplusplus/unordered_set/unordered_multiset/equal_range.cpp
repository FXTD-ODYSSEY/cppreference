// cplusplus link https://cplusplus.com/reference/unordered_set\unordered_multiset\equal_range
// unordered_multiset::equal_range
#include <iostream>
#include <string>
#include <unordered_set>

int main()
{
    std::unordered_multiset<std::string> myums = { "cow", "pig", "pig", "chicken", "pig", "chicken" };

    auto myrange = myums.equal_range("pig");

    std::cout << "These pigs were found:";

    while (myrange.first != myrange.second) {
        std::cout << " " << *myrange.first++;
    }

    std::cout << std::endl;

    return 0;
}
