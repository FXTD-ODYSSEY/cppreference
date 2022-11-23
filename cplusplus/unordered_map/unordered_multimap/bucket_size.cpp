// cplusplus link https://cplusplus.com/reference/unordered_map\unordered_multimap\bucket_size
// unordered_multimap::bucket_size
#include <iostream>
#include <string>
#include <unordered_map>

int main()
{
    std::unordered_multimap<std::string, std::string> myumm = {
        { "John", "Alpha" },
        { "Alfred", "Beta" },
        { "Thomas", "Gamma" },
        { "John", "Delta" }
    };

    unsigned nbuckets = myumm.bucket_count();

    std::cout << "myumm has " << nbuckets << " buckets:\n";

    for (unsigned i = 0; i < nbuckets; ++i) {
        std::cout << "bucket #" << i << " has " << myumm.bucket_size(i) << " elements.\n";
    }

    return 0;
}
