// cplusplus link https://cplusplus.com/reference/set\set\size
// set::size
#include <iostream>
#include <set>

int main()
{
    std::set<int> myints;
    std::cout << "0. size: " << myints.size() << '\n';

    for (int i = 0; i < 10; ++i)
        myints.insert(i);
    std::cout << "1. size: " << myints.size() << '\n';

    myints.insert(100);
    std::cout << "2. size: " << myints.size() << '\n';

    myints.erase(5);
    std::cout << "3. size: " << myints.size() << '\n';

    return 0;
}