// cplusplus link https://cplusplus.com/reference/algorithm\partition_copy
// partition_copy example
#include <algorithm> // std::partition_copy, std::count_if
#include <iostream> // std::cout
#include <vector> // std::vector

bool IsOdd(int i) { return (i % 2) == 1; }

int main()
{
    std::vector<int> foo { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    std::vector<int> odd, even;

    // resize vectors to proper size:
    unsigned n = std::count_if(foo.begin(), foo.end(), IsOdd);
    odd.resize(n);
    even.resize(foo.size() - n);

    // partition:
    std::partition_copy(foo.begin(), foo.end(), odd.begin(), even.begin(), IsOdd);

    // print contents:
    std::cout << "odd: ";
    for (int& x : odd)
        std::cout << ' ' << x;
    std::cout << '\n';
    std::cout << "even: ";
    for (int& x : even)
        std::cout << ' ' << x;
    std::cout << '\n';

    return 0;
}
