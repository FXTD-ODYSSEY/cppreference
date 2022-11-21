// cppreference link https://en.cppreference.com/w/cpp/container/vector/size
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> nums { 1, 3, 5, 7 };

    std::cout << "nums contains " << nums.size() << " elements.\n";
}
