// cplusplus link https://cplusplus.com/reference/deque\deque\size
// deque::size
#include <deque>
#include <iostream>

int main()
{
    std::deque<int> myints;
    std::cout << "0. size: " << myints.size() << '\n';

    for (int i = 0; i < 5; i++)
        myints.push_back(i);
    std::cout << "1. size: " << myints.size() << '\n';

    myints.insert(myints.begin(), 5, 100);
    std::cout << "2. size: " << myints.size() << '\n';

    myints.pop_back();
    std::cout << "3. size: " << myints.size() << '\n';

    return 0;
}
