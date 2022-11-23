// cplusplus link https://cplusplus.com/reference/iterator\ostream_iterator\ostream_iterator
// ostream_iterator example
#include <algorithm> // std::copy
#include <iostream> // std::cout
#include <iterator> // std::ostream_iterator
#include <vector> // std::vector

int main()
{
    std::vector<int> myvector;
    for (int i = 1; i < 10; ++i)
        myvector.push_back(i * 10);

    std::ostream_iterator<int> out_it(std::cout, ", ");
    std::copy(myvector.begin(), myvector.end(), out_it);
    return 0;
}
