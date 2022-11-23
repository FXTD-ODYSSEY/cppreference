// cplusplus link https://cplusplus.com/reference/set\multiset\get_allocator
// multiset::get_allocator
#include <iostream>
#include <set>

int main()
{
    std::multiset<int> mymultiset;
    int* p;
    unsigned int i;

    // allocate an array of 5 elements using myset's allocator:
    p = mymultiset.get_allocator().allocate(5);

    // assign some values to array
    for (i = 0; i < 5; i++)
        p[i] = (i + 1) * 10;

    std::cout << "The allocated array contains:";
    for (i = 0; i < 5; i++)
        std::cout << ' ' << p[i];
    std::cout << '\n';

    mymultiset.get_allocator().deallocate(p, 5);

    return 0;
}
