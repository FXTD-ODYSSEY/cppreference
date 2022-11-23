// cplusplus link https://cplusplus.com/reference/iterator\reverse_iterator\operator-
// reverse_iterator::operator- example
#include <iostream> // std::cout
#include <iterator> // std::reverse_iterator
#include <vector> // std::vector

int main()
{
    std::vector<int> myvector;
    for (int i = 0; i < 10; i++)
        myvector.push_back(i); // myvector: 0 1 2 3 4 5 6 7 8 9

    typedef std::vector<int>::iterator iter_type;

    std::reverse_iterator<iter_type> rev_iterator;

    rev_iterator = myvector.rend() - 3;

    std::cout << "myvector.rend()-3 points to: " << *rev_iterator << '\n';

    return 0;
}
