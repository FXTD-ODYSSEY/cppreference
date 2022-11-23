// cplusplus link https://cplusplus.com/reference/iterator\reverse_iterator\operator%2B
// reverse_iterator::operator+ example
#include <iostream> // std::cout
#include <iterator> // std::reverse_iterator
#include <vector> // std::vector

int main()
{
    std::vector<int> myvector;
    for (int i = 0; i < 10; i++)
        myvector.push_back(i); // myvector: 0 1 2 3 4 5 6 7 8 9

    typedef std::vector<int>::iterator iter_type;

    std::reverse_iterator<iter_type> rev_it;

    rev_it = myvector.rbegin() + 3;

    std::cout << "The fourth element from the end is: " << *rev_it << '\n';

    return 0;
}
