// cplusplus link https://cplusplus.com/reference/numeric\adjacent_difference
// adjacent_difference example
#include <functional> // std::multiplies
#include <iostream> // std::cout
#include <numeric> // std::adjacent_difference

int myop(int x, int y) { return x + y; }

int main()
{
    int val[] = { 1, 2, 3, 5, 9, 11, 12 };
    int result[7];

    std::adjacent_difference(val, val + 7, result);
    std::cout << "using default adjacent_difference: ";
    for (int i = 0; i < 7; i++)
        std::cout << result[i] << ' ';
    std::cout << '\n';

    std::adjacent_difference(val, val + 7, result, std::multiplies<int>());
    std::cout << "using functional operation multiplies: ";
    for (int i = 0; i < 7; i++)
        std::cout << result[i] << ' ';
    std::cout << '\n';

    std::adjacent_difference(val, val + 7, result, myop);
    std::cout << "using custom function: ";
    for (int i = 0; i < 7; i++)
        std::cout << result[i] << ' ';
    std::cout << '\n';
    return 0;
}
