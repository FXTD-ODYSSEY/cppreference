// cppreference link https://en.cppreference.com/w/cpp/container/array/swap2
#include <algorithm>
#include <array>
#include <iostream>

int main()
{
    std::array<int, 3> alice { 1, 2, 3 };
    std::array<int, 3> bob { 7, 8, 9 };

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
