// cppreference link https://en.cppreference.com/w/cpp/numeric/valarray/sum
#include <iostream>
#include <valarray>

int main()
{
    std::valarray<int> a = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    std::cout << a.sum() << '\n';
}
