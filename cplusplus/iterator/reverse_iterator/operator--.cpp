// cplusplus link https://cplusplus.com/reference/iterator\reverse_iterator\operator--
// reverse_iterator::operator-- example
#include <iostream> // std::cout
#include <iterator> // std::reverse_iterator
#include <vector> // std::vector

int main()
{
    std::vector<int> myvector;
    for (int i = 0; i < 10; i++)
        myvector.push_back(i);

    typedef std::vector<int>::iterator iter_type;

    std::reverse_iterator<iter_type> rev_begin(myvector.end());
    std::reverse_iterator<iter_type> rev_end(myvector.begin());

    std::reverse_iterator<iter_type> rev_iterator = rev_begin;
    while (rev_iterator != rev_end)
        std::cout << *rev_iterator++ << ' ';
    std::cout << '\n';

    while (rev_iterator != rev_begin)
        std::cout << *(--rev_iterator) << ' ';
    std::cout << '\n';

    return 0;
}
