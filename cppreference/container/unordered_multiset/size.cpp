// cppreference link https://en.cppreference.com/w/cpp/container/unordered_multiset/size
#include <iostream>
#include <unordered_set>

int main()
{
    std::unordered_multiset<int> nums { 1, 3, 5, 7 };

    std::cout << "nums contains " << nums.size() << " elements.\n";
}
