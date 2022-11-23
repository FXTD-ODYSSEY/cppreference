// cplusplus link https://cplusplus.com/reference/functional\greater
// greater example
#include <algorithm> // std::sort
#include <functional> // std::greater
#include <iostream> // std::cout

int main()
{
    int numbers[] = { 20, 40, 50, 10, 30 };
    std::sort(numbers, numbers + 5, std::greater<int>());
    for (int i = 0; i < 5; i++)
        std::cout << numbers[i] << ' ';
    std::cout << '\n';
    return 0;
}
