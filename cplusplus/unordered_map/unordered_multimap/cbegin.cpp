// cplusplus link https://cplusplus.com/reference/unordered_map\unordered_multimap\cbegin
// unordered_multimap::cbegin/cend example
#include <iostream>
#include <unordered_map>

int main()
{
    std::unordered_multimap<std::string, std::string> myumm = {
        { "apple", "red" },
        { "apple", "green" },
        { "orange", "orange" },
        { "strawberry", "red" }
    };

    std::cout << "myumm contains:";
    for (auto it = myumm.cbegin(); it != myumm.cend(); ++it)
        std::cout << " " << it->first << ":" << it->second; // cannot modify *it
    std::cout << std::endl;

    std::cout << "myumm's buckets contain:\n";
    for (unsigned i = 0; i < myumm.bucket_count(); ++i) {
        std::cout << "bucket #" << i << " contains:";
        for (auto local_it = myumm.cbegin(i); local_it != myumm.cend(i); ++local_it)
            std::cout << " " << local_it->first << ":" << local_it->second;
        std::cout << std::endl;
    }

    return 0;
}
