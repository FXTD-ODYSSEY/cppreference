// cppreference link https://en.cppreference.com/w/cpp/container/deque/size
#include <deque>
#include <iostream>

int main()
{
    std::deque<int> nums { 1, 3, 5, 7 };

    std::cout << "nums contains " << nums.size() << " elements.\n";
}
