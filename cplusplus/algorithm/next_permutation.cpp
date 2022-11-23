// cplusplus link https://cplusplus.com/reference/algorithm\next_permutation
// next_permutation example
#include <algorithm> // std::next_permutation, std::sort
#include <iostream> // std::cout

int main()
{
    int myints[] = { 1, 2, 3 };

    std::sort(myints, myints + 3);

    std::cout << "The 3! possible permutations with 3 elements:\n";
    do {
        std::cout << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';
    } while (std::next_permutation(myints, myints + 3));

    std::cout << "After loop: " << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';

    return 0;
}
