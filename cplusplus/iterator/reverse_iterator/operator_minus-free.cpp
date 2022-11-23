// cplusplus link https://cplusplus.com/reference/iterator\reverse_iterator\operator_minus-free
// operator- on reverse_iterator
#include <iostream> // std::cout
#include <iterator> // std::reverse_iterator
#include <vector> // std::vector

int main()
{
    std::vector<int> myvector;
    for (int i = 0; i < 10; i++)
        myvector.push_back(i);

    std::reverse_iterator<std::vector<int>::iterator> from, until;

    from = myvector.rbegin();
    until = myvector.rend();

    std::cout << "myvector has " << (until - from) << " elements.\n";

    return 0;
}
