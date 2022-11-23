// cplusplus link https://cplusplus.com/reference/unordered_map\unordered_multimap\max_load_factor
// unordered_multimap::max_load_factor
#include <iostream>
#include <string>
#include <unordered_map>

int main()
{
    std::unordered_multimap<std::string, std::string> myumm = {
        { "apple", "NY" },
        { "apple", "WA" },
        { "peach", "GA" },
        { "cherry", "UT" }
    };

    std::cout << "current max_load_factor: " << myumm.max_load_factor() << std::endl;
    std::cout << "current size: " << myumm.size() << std::endl;
    std::cout << "current bucket_count: " << myumm.bucket_count() << std::endl;
    std::cout << "current load_factor: " << myumm.load_factor() << std::endl;

    float z = myumm.max_load_factor();
    myumm.max_load_factor(z / 2.0);
    std::cout << "[max_load_factor halved]" << std::endl;

    std::cout << "new max_load_factor: " << myumm.max_load_factor() << std::endl;
    std::cout << "new size: " << myumm.size() << std::endl;
    std::cout << "new bucket_count: " << myumm.bucket_count() << std::endl;
    std::cout << "new load_factor: " << myumm.load_factor() << std::endl;

    return 0;
}
