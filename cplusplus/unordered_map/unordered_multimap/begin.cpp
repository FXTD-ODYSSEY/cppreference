// cplusplus link https://cplusplus.com/reference/unordered_map\unordered_multimap\begin
// unordered_multimap::begin/end example
#include <iostream>
#include <string>
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
    for (auto it = myumm.begin(); it != myumm.end(); ++it)
        std::cout << " " << it->first << ":" << it->second;
    std::cout << std::endl;

    std::cout << "myumm's buckets contain:\n";
    for (unsigned i = 0; i < myumm.bucket_count(); ++i) {
        std::cout << "bucket #" << i << " contains:";
        for (auto local_it = myumm.begin(i); local_it != myumm.end(i); ++local_it)
            std::cout << " " << local_it->first << ":" << local_it->second;
        std::cout << std::endl;
    }

    return 0;
}
