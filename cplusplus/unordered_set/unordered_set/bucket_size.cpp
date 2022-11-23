// cplusplus link https://cplusplus.com/reference/unordered_set\unordered_set\bucket_size
// unordered_set::bucket_size
#include <iostream>
#include <string>
#include <unordered_set>

int main()
{
    std::unordered_set<std::string> myset = { "red", "green", "blue", "yellow", "purple", "pink" };

    unsigned nbuckets = myset.bucket_count();

    std::cout << "myset has " << nbuckets << " buckets:\n";

    for (unsigned i = 0; i < nbuckets; ++i) {
        std::cout << "bucket #" << i << " has " << myset.bucket_size(i) << " elements.\n";
    }

    return 0;
}
