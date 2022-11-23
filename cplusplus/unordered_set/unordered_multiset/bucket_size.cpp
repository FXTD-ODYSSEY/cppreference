// cplusplus link https://cplusplus.com/reference/unordered_set\unordered_multiset\bucket_size
// unordered_multiset::bucket_size
#include <iostream>
#include <string>
#include <unordered_set>

int main()
{
    std::unordered_multiset<std::string> myums = { "human", "klingon", "klingon", "vulcan", "romulan", "cardassian" };

    unsigned nbuckets = myums.bucket_count();

    std::cout << "myums has " << nbuckets << " buckets:\n";

    for (unsigned i = 0; i < nbuckets; ++i) {
        std::cout << "bucket #" << i << " has " << myums.bucket_size(i) << " elements.\n";
    }

    return 0;
}
