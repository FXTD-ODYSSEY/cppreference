// cppreference link https://en.cppreference.com/w/cpp/container/multiset/swap2
#include <algorithm>
#include <iostream>
#include <set>

int main()
{
    std::multiset<int> alice { 1, 2, 3 };
    std::multiset<int> bob { 7, 8, 9, 10 };

    auto print = [](const int& n) { std::cout << ' ' << n; };

    // Print state before swap
    std::cout << "alice:";
    std::for_each(alice.begin(), alice.end(), print);
    std::cout << "\n"
                 "bob :";
    std::for_each(bob.begin(), bob.end(), print);
    std::cout << '\n';

    std::cout << "-- SWAP\n";
    std::swap(alice, bob);

    // Print state after swap
    std::cout << "alice:";
    std::for_each(alice.begin(), alice.end(), print);
    std::cout << "\n"
                 "bob :";
    std::for_each(bob.begin(), bob.end(), print);
    std::cout << '\n';
}
