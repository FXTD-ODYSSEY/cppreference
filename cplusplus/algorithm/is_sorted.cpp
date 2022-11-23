// cplusplus link https://cplusplus.com/reference/algorithm\is_sorted
// is_sorted example
#include <algorithm> // std::is_sorted, std::prev_permutation
#include <array> // std::array
#include <iostream> // std::cout

int main()
{
    std::array<int, 4> foo { 2, 4, 1, 3 };

    do {
        // try a new permutation:
        std::prev_permutation(foo.begin(), foo.end());

        // print range:
        std::cout << "foo:";
        for (int& x : foo)
            std::cout << ' ' << x;
        std::cout << '\n';

    } while (!std::is_sorted(foo.begin(), foo.end()));

    std::cout << "the range is sorted!\n";

    return 0;
}
