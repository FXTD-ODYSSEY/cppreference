// cplusplus link https://cplusplus.com/reference/set\multiset\swap-free
// swap (multiset overload)
#include <iostream>
#include <set>

main()
{
    int myints[] = { 12, 75, 12, 35, 20, 35 };
    std::multiset<int> first(myints, myints + 3); // 12,12,75
    std::multiset<int> second(myints + 3, myints + 6); // 20,35,35

    swap(first, second);

    std::cout << "first contains:";
    for (std::multiset<int>::iterator it = first.begin(); it != first.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';

    std::cout << "second contains:";
    for (std::multiset<int>::iterator it = second.begin(); it != second.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';

    return 0;
}
