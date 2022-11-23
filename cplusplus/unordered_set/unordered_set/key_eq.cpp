// cplusplus link https://cplusplus.com/reference/unordered_set\unordered_set\key_eq
// unordered_set::key_eq
#include <iostream>
#include <string>
#include <unordered_set>

int main()
{
    std::unordered_set<std::string> myset;

    bool case_insensitive = myset.key_eq()("checking", "CHECKING");

    std::cout << "myset.key_eq() is ";
    std::cout << (case_insensitive ? "case insensitive" : "case sensitive");
    std::cout << std::endl;

    return 0;
}
