// cppreference link https://en.cppreference.com/w/cpp/container/list/size
#include <iostream>
#include <list>

int main()
{
    std::list<int> nums { 1, 3, 5, 7 };

    std::cout << "nums contains " << nums.size() << " elements.\n";
}
