// cplusplus link https://cplusplus.com/reference/unordered_set\unordered_set\empty
// unordered_set::empty
#include <iostream>
#include <string>
#include <unordered_set>

int main()
{
    std::unordered_set<std::string> first;
    std::unordered_set<std::string> second = { "alpha", "beta", "gamma" };
    std::cout << "first " << (first.empty() ? "is empty" : "is not empty") << std::endl;
    std::cout << "second " << (second.empty() ? "is empty" : "is not empty") << std::endl;
    return 0;
}
