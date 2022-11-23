// cplusplus link https://cplusplus.com/reference/unordered_map\unordered_multimap\load_factor
// unordered_multimap hash table stats
#include <iostream>
#include <unordered_map>

int main()
{
    std::unordered_multimap<int, int> mymap;

    std::cout << "size = " << mymap.size() << std::endl;
    std::cout << "bucket_count = " << mymap.bucket_count() << std::endl;
    std::cout << "load_factor = " << mymap.load_factor() << std::endl;
    std::cout << "max_load_factor = " << mymap.max_load_factor() << std::endl;

    return 0;
}
