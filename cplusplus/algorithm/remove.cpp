// cplusplus link https://cplusplus.com/reference/algorithm\remove
// remove algorithm example
#include <algorithm> // std::remove
#include <iostream> // std::cout

int main()
{
    int myints[] = { 10, 20, 30, 30, 20, 10, 10, 20 }; // 10 20 30 30 20 10 10 20

    // bounds of range:
    int* pbegin = myints; // ^
    int* pend = myints + sizeof(myints) / sizeof(int); // ^                       ^

    pend = std::remove(pbegin, pend, 20); // 10 30 30 10 10 ?  ?  ?
                                          // ^              ^
    std::cout << "range contains:";
    for (int* p = pbegin; p != pend; ++p)
        std::cout << ' ' << *p;
    std::cout << '\n';

    return 0;
}
