// cplusplus link https://cplusplus.com/reference/unordered_set\unordered_multiset\load_factor
// unordered_multiset hash table stats
#include <iostream>
#include <unordered_set>

int main()
{
    std::unordered_multiset<int> myums;

    std::cout << "size = " << myums.size() << std::endl;
    std::cout << "bucket_count = " << myums.bucket_count() << std::endl;
    std::cout << "load_factor = " << myums.load_factor() << std::endl;
    std::cout << "max_load_factor = " << myums.max_load_factor() << std::endl;

    return 0;
}
