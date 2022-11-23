// cplusplus link https://cplusplus.com/reference/unordered_map\unordered_multimap\empty
// unordered_multimap::empty
#include <iostream>
#include <unordered_map>

int main()
{
    std::unordered_multimap<int, int> first;
    std::unordered_multimap<int, int> second = { { 1, 10 }, { 2, 20 }, { 1, 15 } };
    std::cout << "first " << (first.empty() ? "is empty" : "is not empty") << std::endl;
    std::cout << "second " << (second.empty() ? "is empty" : "is not empty") << std::endl;
    return 0;
}
