// cplusplus link https://cplusplus.com/reference/algorithm\rotate_copy
// rotate_copy algorithm example
#include <algorithm> // std::rotate_copy
#include <iostream> // std::cout
#include <vector> // std::vector

int main()
{
    int myints[] = { 10, 20, 30, 40, 50, 60, 70 };

    std::vector<int> myvector(7);

    std::rotate_copy(myints, myints + 3, myints + 7, myvector.begin());

    // print out content:
    std::cout << "myvector contains:";
    for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';

    return 0;
}
