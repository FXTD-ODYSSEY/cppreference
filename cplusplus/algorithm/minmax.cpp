// cplusplus link https://cplusplus.com/reference/algorithm\minmax
// minmax example
#include <algorithm> // std::minmax
#include <iostream> // std::cout

int main()
{
    auto result = std::minmax({ 1, 2, 3, 4, 5 });

    std::cout << "minmax({1,2,3,4,5}): ";
    std::cout << result.first << ' ' << result.second << '\n';
    return 0;
}
