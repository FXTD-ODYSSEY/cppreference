// cplusplus link https://cplusplus.com/reference/unordered_map\unordered_multimap\key_eq
// unordered_multimap::key_eq
#include <iostream>
#include <string>
#include <unordered_map>

int main()
{
    std::unordered_multimap<std::string, std::string> myumm;

    bool case_insensitive = myumm.key_eq()("test", "TEST");

    std::cout << "myumm.key_eq() is ";
    std::cout << (case_insensitive ? "case insensitive" : "case sensitive");
    std::cout << std::endl;

    return 0;
}
