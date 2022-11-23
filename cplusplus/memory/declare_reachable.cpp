// cplusplus link https://cplusplus.com/reference/memory\declare_reachable
// declare_reachable / undeclare_reachable example
#include <cstdint>
#include <iostream>
#include <memory>

int main()
{
    int* p = new int(1); // dynamic object

    std::declare_reachable(p);

    p = (int*)((std::uintptr_t)p ^ UINTPTR_MAX); // scrambling p

    // dynamic object not reachable by any live safely-derived pointer

    p = std::undeclare_reachable((int*)((std::uintptr_t)p ^ UINTPTR_MAX));
    // p is back again a safely-derived pointer to the dynamic object

    std::cout << "p: " << *p << '\n';
    delete p;

    return 0;
}
