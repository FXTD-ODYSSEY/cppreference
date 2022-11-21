// cppreference link https://en.cppreference.com/w/cpp/iterator/begin
#include <iostream>
#include <iterator>
#include <vector>

int main()
{
    std::vector<int> v = { 3, 1, 4 };
    auto vi = std::begin(v);
    std::cout << std::showpos << *vi << '\n';

    int a[] = { -5, 10, 15 };
    auto ai = std::begin(a);
    std::cout << *ai << '\n';
}
