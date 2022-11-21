// cppreference link https://en.cppreference.com/w/cpp/container/map/contains
#include <iostream>
#include <map>

int main()
{
    std::map<int, char> example = { { 1, 'a' }, { 2, 'b' } };

    for (int x : { 2, 5 }) {
        if (example.contains(x)) {
            std::cout << x << ": Found\n";
        } else {
            std::cout << x << ": Not found\n";
        }
    }
}
