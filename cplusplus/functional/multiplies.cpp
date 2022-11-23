// cplusplus link https://cplusplus.com/reference/functional\multiplies
// factorials (multiplies example)
#include <functional> // std::multiplies
#include <iostream> // std::cout
#include <numeric> // std::partial_sum

int main()
{
    int numbers[9];
    int factorials[9];
    for (int i = 0; i < 9; i++)
        numbers[i] = i + 1;
    std::partial_sum(numbers, numbers + 9, factorials, std::multiplies<int>());
    for (int i = 0; i < 9; i++)
        std::cout << numbers[i] << "! is " << factorials[i] << '\n';
    return 0;
}
