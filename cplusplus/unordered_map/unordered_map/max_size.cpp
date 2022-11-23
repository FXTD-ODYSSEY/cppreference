// cplusplus link https://cplusplus.com/reference/unordered_map\unordered_map\max_size
// unordered_map limits
#include <iostream>
#include <unordered_map>

int main()
{
    std::unordered_map<int, int> mymap;

    std::cout << "max_size = " << mymap.max_size() << std::endl;
    std::cout << "max_bucket_count = " << mymap.max_bucket_count() << std::endl;
    std::cout << "max_load_factor = " << mymap.max_load_factor() << std::endl;

    return 0;
}
