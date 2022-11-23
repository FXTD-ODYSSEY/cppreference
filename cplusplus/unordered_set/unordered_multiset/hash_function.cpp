// cplusplus link https://cplusplus.com/reference/unordered_set\unordered_multiset\hash_function
// unordered_multiset::hash_function
#include <iostream>
#include <string>
#include <unordered_set>

typedef std::unordered_multiset<std::string> stringset;

int main()
{
    stringset myums;

    stringset::hasher fn = myums.hash_function();

    std::cout << "that: " << fn("that") << std::endl;
    std::cout << "than: " << fn("than") << std::endl;

    return 0;
}
