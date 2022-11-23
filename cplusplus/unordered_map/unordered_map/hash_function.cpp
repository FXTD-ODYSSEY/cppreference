// cplusplus link https://cplusplus.com/reference/unordered_map\unordered_map\hash_function
// unordered_map::hash_function
#include <iostream>
#include <string>
#include <unordered_map>

typedef std::unordered_map<std::string, std::string> stringmap;

int main()
{
    stringmap mymap;

    stringmap::hasher fn = mymap.hash_function();

    std::cout << "this: " << fn("this") << std::endl;
    std::cout << "thin: " << fn("thin") << std::endl;

    return 0;
}
