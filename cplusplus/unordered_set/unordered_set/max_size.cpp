// cplusplus link https://cplusplus.com/reference/unordered_set\unordered_set\max_size
// unordered_set limits
#include <iostream>
#include <unordered_set>

int main()
{
    std::unordered_set<int> myset;

    std::cout << "max_size = " << myset.max_size() << std::endl;
    std::cout << "max_bucket_count = " << myset.max_bucket_count() << std::endl;
    std::cout << "max_load_factor = " << myset.max_load_factor() << std::endl;

    return 0;
}
