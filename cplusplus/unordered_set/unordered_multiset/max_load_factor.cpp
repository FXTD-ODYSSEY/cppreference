// cplusplus link https://cplusplus.com/reference/unordered_set\unordered_multiset\max_load_factor
// unordered_multiset::max_load_factor
#include <iostream>
#include <string>
#include <unordered_set>

int main()
{
    std::unordered_multiset<std::string> myums = { "human", "klingon", "vulcan", "vulcan", "andorian", "vulcan" };

    std::cout << "current max_load_factor: " << myums.max_load_factor() << std::endl;
    std::cout << "current size: " << myums.size() << std::endl;
    std::cout << "current bucket_count: " << myums.bucket_count() << std::endl;
    std::cout << "current load_factor: " << myums.load_factor() << std::endl;

    float z = myums.max_load_factor();
    myums.max_load_factor(z / 2.0);
    std::cout << "[max_load_factor halved]" << std::endl;

    std::cout << "new max_load_factor: " << myums.max_load_factor() << std::endl;
    std::cout << "new size: " << myums.size() << std::endl;
    std::cout << "new bucket_count: " << myums.bucket_count() << std::endl;
    std::cout << "new load_factor: " << myums.load_factor() << std::endl;

    return 0;
}
