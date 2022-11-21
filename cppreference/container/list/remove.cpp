// cppreference link https://en.cppreference.com/w/cpp/container/list/remove
#include <iostream>
#include <list>

int main()
{
    std::list<int> l = { 1, 100, 2, 3, 10, 1, 11, -1, 12 };

    auto count1 = l.remove(1);
    std::cout << count1 << " elements equal to 1 were removed\n";

    auto count2 = l.remove_if([](int n) { return n > 10; });
    std::cout << count2 << " elements greater than 10 were removed\n";

    std::cout << "Finally, the list contains: ";
    for (int n : l) {
        std::cout << n << ' ';
    }
    std::cout << '\n';
}
