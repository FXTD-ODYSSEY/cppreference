// cppreference link https://en.cppreference.com/w/cpp/container/set/size
#include <iostream>
#include <set>

int main()
{
    std::set<int> nums { 1, 3, 5, 7 };

    std::cout << "nums contains " << nums.size() << " elements.\n";
}
