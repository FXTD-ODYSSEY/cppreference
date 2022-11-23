// cplusplus link https://cplusplus.com/reference/functional\binary_negate
// binary_negate example
#include <algorithm> // std::mismatch
#include <functional> // std::binary_negate, std::equal_to
#include <iostream> // std::cout
#include <utility> // std::pair

int main()
{
    std::equal_to<int> equality;
    std::binary_negate<std::equal_to<int>> nonequality(equality);
    int foo[] = { 10, 20, 30, 40, 50 };
    int bar[] = { 0, 15, 30, 45, 60 };
    std::pair<int*, int*> firstmatch, firstmismatch;
    firstmismatch = std::mismatch(foo, foo + 5, bar, equality);
    firstmatch = std::mismatch(foo, foo + 5, bar, nonequality);
    std::cout << "First mismatch in bar is " << *firstmismatch.second << "\n";
    std::cout << "First match in bar is " << *firstmatch.second << "\n";
    return 0;
}
