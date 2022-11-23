// cplusplus link https://cplusplus.com/reference/set\multiset\swap
// swap multisets
#include <iostream>
#include <set>

main()
{
    int myints[] = { 19, 72, 4, 36, 20, 20 };
    std::multiset<int> first(myints, myints + 3); // 4,19,72
    std::multiset<int> second(myints + 3, myints + 6); // 20,20,36

    first.swap(second);

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
