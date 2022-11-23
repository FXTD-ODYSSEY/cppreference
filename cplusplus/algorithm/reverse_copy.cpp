// cplusplus link https://cplusplus.com/reference/algorithm\reverse_copy
// reverse_copy example
#include <algorithm> // std::reverse_copy
#include <iostream> // std::cout
#include <vector> // std::vector

int main()
{
    int myints[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    std::vector<int> myvector;

    myvector.resize(9); // allocate space

    std::reverse_copy(myints, myints + 9, myvector.begin());

    // print out content:
    std::cout << "myvector contains:";
    for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
        std::cout << ' ' << *it;

    std::cout << '\n';

    return 0;
}
