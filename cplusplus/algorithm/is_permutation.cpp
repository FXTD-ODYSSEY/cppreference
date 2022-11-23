// cplusplus link https://cplusplus.com/reference/algorithm\is_permutation
// is_permutation example
#include <algorithm> // std::is_permutation
#include <array> // std::array
#include <iostream> // std::cout

int main()
{
    std::array<int, 5> foo = { 1, 2, 3, 4, 5 };
    std::array<int, 5> bar = { 3, 1, 4, 5, 2 };

    if (std::is_permutation(foo.begin(), foo.end(), bar.begin()))
        std::cout << "foo and bar contain the same elements.\n";

    return 0;
}
