// cplusplus link https://cplusplus.com/reference/unordered_set\unordered_multiset\key_eq
// unordered_multiset::key_eq
#include <iostream>
#include <string>
#include <unordered_set>

int main()
{
    std::unordered_multiset<std::string> myums;

    bool case_insensitive = myums.key_eq()("case", "CASE");

    std::cout << "myums.key_eq() is ";
    std::cout << (case_insensitive ? "case insensitive" : "case sensitive");
    std::cout << std::endl;

    return 0;
}
