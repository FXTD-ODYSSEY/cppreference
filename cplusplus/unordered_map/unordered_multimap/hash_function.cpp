// cplusplus link https://cplusplus.com/reference/unordered_map\unordered_multimap\hash_function
// unordered_multimap::hash_function
#include <iostream>
#include <string>
#include <unordered_map>

typedef std::unordered_multimap<std::string, std::string> stringmap;

int main()
{
    stringmap myumm;

    stringmap::hasher fn = myumm.hash_function();

    std::cout << "this: " << fn("this") << std::endl;
    std::cout << "thin: " << fn("thin") << std::endl;

    return 0;
}
