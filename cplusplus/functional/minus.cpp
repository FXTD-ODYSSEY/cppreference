// cplusplus link https://cplusplus.com/reference/functional\minus
// minus example
#include <algorithm> // std::transform
#include <functional> // std::minus
#include <iostream> // std::cout

int main()
{
    int numbers[] = { 10, 20, 30 };
    int result;
    result = std::accumulate(numbers, numbers + 3, 100, std::minus<int>());
    std::cout << "The result of 100-10-20-30 is " << result << ".\n";
    return 0;
}
