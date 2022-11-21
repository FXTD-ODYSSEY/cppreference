// cppreference link https://en.cppreference.com/w/cpp/iterator/reverse_iterator/operator%3D
#include <iostream>
#include <iterator>

int main()
{
    const int a1[] { 0, 1, 2 };
    int a2[] { 0, 1, 2, 3 };
    short a3[] { 40, 41, 42 };

    std::reverse_iterator<const int*> it1 { std::crbegin(a1) };
    it1 = std::reverse_iterator<int*> { std::rbegin(a2) }; // OK
    //  it1 = std::reverse_iterator<short*>{std::rbegin(a3)}; // compilation error:
    // incompatible pointer types
    std::reverse_iterator<short const*> it2 { nullptr };
    it2 = std::rbegin(a3); // OK
    //  it2 = std::begin(a3);  // compilation error: no viable overloaded '='
    std::cout << *it2 << '\n';
}
