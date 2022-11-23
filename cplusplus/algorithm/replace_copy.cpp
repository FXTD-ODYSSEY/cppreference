// cplusplus link https://cplusplus.com/reference/algorithm\replace_copy
// replace_copy example
#include <algorithm> // std::replace_copy
#include <iostream> // std::cout
#include <vector> // std::vector

int main()
{
    int myints[] = { 10, 20, 30, 30, 20, 10, 10, 20 };

    std::vector<int> myvector(8);
    std::replace_copy(myints, myints + 8, myvector.begin(), 20, 99);

    std::cout << "myvector contains:";
    for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';

    return 0;
}
