// cplusplus link https://cplusplus.com/reference/unordered_set\unordered_set\load_factor
// unordered_set hash table stats
#include <iostream>
#include <unordered_set>

int main()
{
    std::unordered_set<int> myset;

    std::cout << "size = " << myset.size() << std::endl;
    std::cout << "bucket_count = " << myset.bucket_count() << std::endl;
    std::cout << "load_factor = " << myset.load_factor() << std::endl;
    std::cout << "max_load_factor = " << myset.max_load_factor() << std::endl;

    return 0;
}
