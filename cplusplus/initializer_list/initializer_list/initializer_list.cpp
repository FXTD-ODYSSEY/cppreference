// cplusplus link https://cplusplus.com/reference/initializer_list\initializer_list\initializer_list
// initializer_list example
#include <initializer_list> // std::initializer_list
#include <iostream> // std::cout

int main()
{
    std::initializer_list<int> mylist;
    mylist = { 10, 20, 30 };
    std::cout << "mylist contains:";
    for (int x : mylist)
        std::cout << ' ' << x;
    std::cout << '\n';
    return 0;
}
