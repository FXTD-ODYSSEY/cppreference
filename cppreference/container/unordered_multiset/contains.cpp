// cppreference link https://en.cppreference.com/w/cpp/container/unordered_multiset/contains
#include <iostream>
#include <unordered_set>

int main()
{
    std::unordered_multiset<int> example = { 1, 2, 3, 4 };

    for (int x : { 2, 5 }) {
        if (example.contains(x)) {
            std::cout << x << ": Found\n";
        } else {
            std::cout << x << ": Not found\n";
        }
    }
}
