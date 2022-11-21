// cppreference link https://en.cppreference.com/w/cpp/container/unordered_multimap/size
#include <iostream>
#include <unordered_map>

int main()
{
    std::unordered_multimap<int, char> nums { { 1, 'a' }, { 3, 'b' }, { 5, 'c' }, { 7, 'd' } };

    std::cout << "nums contains " << nums.size() << " elements.\n";
}
