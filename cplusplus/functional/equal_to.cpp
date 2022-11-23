// cplusplus link https://cplusplus.com/reference/functional\equal_to
// equal_to example
#include <algorithm> // std::mismatch
#include <functional> // std::equal_to
#include <iostream> // std::cout
#include <utility> // std::pair

int main()
{
    std::pair<int*, int*> ptiter;
    int foo[] = { 10, 20, 30, 40, 50 };
    int bar[] = { 10, 20, 40, 80, 160 };
    ptiter = std::mismatch(foo, foo + 5, bar, std::equal_to<int>());
    std::cout << "First mismatching pair is: " << *ptiter.first;
    std::cout << " and " << *ptiter.second << '\n';
    return 0;
}
