// cplusplus link https://cplusplus.com/reference/list\list\size
// list::size
#include <iostream>
#include <list>

int main()
{
    std::list<int> myints;
    std::cout << "0. size: " << myints.size() << '\n';

    for (int i = 0; i < 10; i++)
        myints.push_back(i);
    std::cout << "1. size: " << myints.size() << '\n';

    myints.insert(myints.begin(), 10, 100);
    std::cout << "2. size: " << myints.size() << '\n';

    myints.pop_back();
    std::cout << "3. size: " << myints.size() << '\n';

    return 0;
}
