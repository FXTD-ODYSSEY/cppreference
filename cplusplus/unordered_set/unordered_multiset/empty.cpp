// cplusplus link https://cplusplus.com/reference/unordered_set\unordered_multiset\empty
// unordered_multiset::empty
#include <iostream>
#include <string>
#include <unordered_set>

int main()
{
    std::unordered_multiset<std::string> first;
    std::unordered_multiset<std::string> second = { "mom", "dad", "son", "daughter", "son" };
    std::cout << "first " << (first.empty() ? "is empty" : "is not empty") << std::endl;
    std::cout << "second " << (second.empty() ? "is empty" : "is not empty") << std::endl;
    return 0;
}
