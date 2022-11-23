// cplusplus link https://cplusplus.com/reference/functional\bit_xor
// bit_xor example
#include <algorithm> // std::accumulate
#include <functional> // std::bit_xor
#include <iostream> // std::cout
#include <iterator> // std::end

int main()
{
    int flags[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int acc = std::accumulate(flags, std::end(flags), 0, std::bit_xor<int>());
    std::cout << "xor: " << acc << '\n';
    return 0;
}
