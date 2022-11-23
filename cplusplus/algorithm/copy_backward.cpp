// cplusplus link https://cplusplus.com/reference/algorithm\copy_backward
// copy_backward example
#include <algorithm> // std::copy_backward
#include <iostream> // std::cout
#include <vector> // std::vector

int main()
{
    std::vector<int> myvector;

    // set some values:
    for (int i = 1; i <= 5; i++)
        myvector.push_back(i * 10); // myvector: 10 20 30 40 50

    myvector.resize(myvector.size() + 3); // allocate space for 3 more elements

    std::copy_backward(myvector.begin(), myvector.begin() + 5, myvector.end());

    std::cout << "myvector contains:";
    for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';

    return 0;
}
