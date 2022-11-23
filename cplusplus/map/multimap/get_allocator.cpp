// cplusplus link https://cplusplus.com/reference/map\multimap\get_allocator
// map::get_allocator
#include <iostream>
#include <map>

int main()
{
    int psize;
    std::multimap<char, int> mymm;
    std::pair<const char, int>* p;

    // allocate an array of 5 elements using mymm's allocator:
    p = mymm.get_allocator().allocate(5);

    // assign some values to array
    psize = sizeof(std::multimap<char, int>::value_type) * 5;

    std::cout << "The allocated array has a size of " << psize << " bytes.\n";

    mymm.get_allocator().deallocate(p, 5);

    return 0;
}
