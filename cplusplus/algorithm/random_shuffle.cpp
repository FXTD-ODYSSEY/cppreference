// cplusplus link https://cplusplus.com/reference/algorithm\random_shuffle
// random_shuffle example
#include <algorithm> // std::random_shuffle
#include <cstdlib> // std::rand, std::srand
#include <ctime> // std::time
#include <iostream> // std::cout
#include <vector> // std::vector

// random generator function:
int myrandom(int i) { return std::rand() % i; }

int main()
{
    std::srand(unsigned(std::time(0)));
    std::vector<int> myvector;

    // set some values:
    for (int i = 1; i < 10; ++i)
        myvector.push_back(i); // 1 2 3 4 5 6 7 8 9

    // using built-in random generator:
    std::random_shuffle(myvector.begin(), myvector.end());

    // using myrandom:
    std::random_shuffle(myvector.begin(), myvector.end(), myrandom);

    // print out content:
    std::cout << "myvector contains:";
    for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
        std::cout << ' ' << *it;

    std::cout << '\n';

    return 0;
}
