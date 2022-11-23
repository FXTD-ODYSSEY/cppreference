// cplusplus link https://cplusplus.com/reference/functional\not2
// not2 example
#include <algorithm> // std::mismatch
#include <functional> // std::not2, std::equal_to
#include <iostream> // std::cout
#include <utility> // std::pair

int main()
{
    int foo[] = { 10, 20, 30, 40, 50 };
    int bar[] = { 0, 15, 30, 45, 60 };
    std::pair<int*, int*> firstmatch, firstmismatch;
    firstmismatch = std::mismatch(foo, foo + 5, bar, std::equal_to<int>());
    firstmatch = std::mismatch(foo, foo + 5, bar, std::not2(std::equal_to<int>()));
    std::cout << "First mismatch in bar is " << *firstmismatch.second << '\n';
    std::cout << "First match in bar is " << *firstmatch.second << '\n';
    return 0;
}
