// cplusplus link https://cplusplus.com/reference/unordered_set\unordered_set\find
// unordered_set::find
#include <iostream>
#include <string>
#include <unordered_set>

int main()
{
    std::unordered_set<std::string> myset = { "red", "green", "blue" };

    std::string input;
    std::cout << "color? ";
    getline(std::cin, input);

    std::unordered_set<std::string>::const_iterator got = myset.find(input);

    if (got == myset.end())
        std::cout << "not found in myset";
    else
        std::cout << *got << " is in myset";

    std::cout << std::endl;

    return 0;
}
