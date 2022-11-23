// cplusplus link https://cplusplus.com/reference/forward_list\forward_list\max_size
// forward_list::max_size
#include <forward_list>
#include <iostream>
#include <sstream>

int main()
{
    int myint;
    std::string mystring;
    std::forward_list<int> mylist;

    std::cout << "Enter size: ";
    std::getline(std::cin, mystring);
    std::stringstream(mystring) >> myint;

    if (myint <= mylist.max_size())
        mylist.resize(myint);
    else
        std::cout << "That size exceeds the maximum.\n";

    return 0;
}
