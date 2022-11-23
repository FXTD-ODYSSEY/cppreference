// cplusplus link https://cplusplus.com/reference/set\multiset\operator%3D
// assignment operator with multisets
#include <iostream>
#include <set>

int main()
{
    int myints[] = { 19, 81, 36, 36, 19 };
    std::multiset<int> first(myints, myints + 5); // multiset with 5 ints
    std::multiset<int> second; // empty multiset

    second = first; // now second contains the 5 ints
    first = std::multiset<int>(); // and first is empty

    std::cout << "Size of first: " << first.size() << '\n';
    std::cout << "Size of second: " << second.size() << '\n';
    return 0;
}
