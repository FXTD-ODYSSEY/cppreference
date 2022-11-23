// cplusplus link https://cplusplus.com/reference/unordered_map\unordered_multimap\bucket_count
// unordered_multimap::bucket_count
#include <iostream>
#include <string>
#include <unordered_map>

int main()
{
    std::unordered_multimap<std::string, std::string> myumm = {
        { "bed", "bedroom" },
        { "oven", "kitchen" },
        { "towel", "bathroom" },
        { "towel", "beach" },
        { "plant", "garden" }
    };

    unsigned n = myumm.bucket_count();

    std::cout << "myumm has " << n << " buckets.\n";

    for (unsigned i = 0; i < n; ++i) {
        std::cout << "bucket #" << i << " contains: ";
        for (auto it = myumm.begin(i); it != myumm.end(i); ++it)
            std::cout << "[" << it->first << ":" << it->second << "] ";
        std::cout << "\n";
    }

    return 0;
}
