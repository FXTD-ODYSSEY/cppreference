// cplusplus link https://cplusplus.com/reference/algorithm\is_partitioned
// is_partitioned example
#include <algorithm> // std::is_partitioned
#include <array> // std::array
#include <iostream> // std::cout

bool IsOdd(int i) { return (i % 2) == 1; }

int main()
{
    std::array<int, 7> foo { 1, 2, 3, 4, 5, 6, 7 };

    // print contents:
    std::cout << "foo:";
    for (int& x : foo)
        std::cout << ' ' << x;
    if (std::is_partitioned(foo.begin(), foo.end(), IsOdd))
        std::cout << " (partitioned)\n";
    else
        std::cout << " (not partitioned)\n";

    // partition array:
    std::partition(foo.begin(), foo.end(), IsOdd);

    // print contents again:
    std::cout << "foo:";
    for (int& x : foo)
        std::cout << ' ' << x;
    if (std::is_partitioned(foo.begin(), foo.end(), IsOdd))
        std::cout << " (partitioned)\n";
    else
        std::cout << " (not partitioned)\n";

    return 0;
}
