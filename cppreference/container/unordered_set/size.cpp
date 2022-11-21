// cppreference link https://en.cppreference.com/w/cpp/container/unordered_set/size
#include <iostream>
#include <unordered_set>

int main()
{
    std::unordered_set<int> nums { 1, 3, 5, 7 };

    std::cout << "nums contains " << nums.size() << " elements.\n";
}
