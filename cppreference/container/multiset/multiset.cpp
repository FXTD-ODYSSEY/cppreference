// cppreference link https://en.cppreference.com/w/cpp/container/multiset/multiset
#include <iostream>
#include <set>
#include <string_view>

void print(const std::string_view name, const std::multiset<int>& ms)
{
    std::cout << name << ": ";
    for (auto element : ms)
        std::cout << element << " ";
    std::cout << '\n';
}

int main()
{
    // (1) Default constructor
    std::multiset<int> a;
    a.insert(4);
    a.insert(3);
    a.insert(2);
    a.insert(1);
    print("a", a);

    // (4) Iterator constructor
    std::multiset<int> b(a.begin(), a.find(3));
    print("b", b);

    // (6) Copy constructor
    std::multiset<int> c(a);
    print("c", c);

    // (8) Move constructor
    std::multiset<int> d(std::move(a));
    print("d", d);

    // (10) Initializer list constructor
    std::multiset<int> e { 3, 2, 1, 2, 4, 7, 3 };
    print("e", e);
}
