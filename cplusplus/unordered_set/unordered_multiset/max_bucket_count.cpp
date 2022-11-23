// cplusplus link https://cplusplus.com/reference/unordered_set\unordered_multiset\max_bucket_count
// unordered_multiset limits
#include <iostream>
#include <unordered_set>

int main()
{
    std::unordered_multiset<int> myums;

    std::cout << "max_size = " << myums.max_size() << std::endl;
    std::cout << "max_bucket_count = " << myums.max_bucket_count() << std::endl;
    std::cout << "max_load_factor = " << myums.max_load_factor() << std::endl;

    return 0;
}
