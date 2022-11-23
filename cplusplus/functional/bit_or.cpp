// cplusplus link https://cplusplus.com/reference/functional\bit_or
// bit_or example
#include <functional> // std::bit_or
#include <iostream> // std::cout
#include <iterator> // std::end
#include <numeric> // std::accumulate

int main()
{
    int flags[] = { 1, 2, 4, 8, 16, 32, 64, 128 };
    int acc = std::accumulate(flags, std::end(flags), 0, std::bit_or<int>());
    std::cout << "accumulated: " << acc << '\n';
    return 0;
}
