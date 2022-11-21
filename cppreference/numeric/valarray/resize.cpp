// cppreference link https://en.cppreference.com/w/cpp/numeric/valarray/resize
#include <iostream>
#include <valarray>
int main()
{
    std::valarray<int> v { 1, 2, 3 };
    v.resize(10);
    for (int n : v)
        std::cout << n << ' ';
    std::cout << '\n';
}
