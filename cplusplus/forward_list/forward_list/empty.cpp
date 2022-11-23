// cplusplus link https://cplusplus.com/reference/forward_list\forward_list\empty
// forward_list::empty
#include <forward_list>
#include <iostream>

int main()
{
    std::forward_list<int> first;
    std::forward_list<int> second = { 20, 40, 80 };
    std::cout << "first " << (first.empty() ? "is empty" : "is not empty") << std::endl;
    std::cout << "second " << (second.empty() ? "is empty" : "is not empty") << std::endl;
    return 0;
}
