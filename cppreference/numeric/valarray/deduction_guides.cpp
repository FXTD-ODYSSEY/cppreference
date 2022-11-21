// cppreference link https://en.cppreference.com/w/cpp/numeric/valarray/deduction_guides
#include <iostream>
#include <valarray>

int main()
{
    int a[] = { 1, 2, 3, 4 };
    std::valarray va(a, 3); // uses explicit deduction guide
    for (int x : va)
        std::cout << x << ' ';
}
