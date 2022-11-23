// cplusplus link https://cplusplus.com/reference/algorithm\copy_if
// copy_if example
#include <algorithm> // std::copy_if, std::distance
#include <iostream> // std::cout
#include <vector> // std::vector

int main()
{
    std::vector<int> foo = { 25, 15, 5, -5, -15 };
    std::vector<int> bar(foo.size());

    // copy only positive numbers:
    auto it = std::copy_if(foo.begin(), foo.end(), bar.begin(), [](int i) { return !(i < 0); });
    bar.resize(std::distance(bar.begin(), it)); // shrink container to new size

    std::cout << "bar contains:";
    for (int& x : bar)
        std::cout << ' ' << x;
    std::cout << '\n';

    return 0;
}
