// cplusplus link https://cplusplus.com/reference/iterator\reverse_iterator\base
// reverse_iterator::base example
#include <iostream> // std::cout
#include <iterator> // std::reverse_iterator
#include <vector> // std::vector

int main()
{
    std::vector<int> myvector;
    for (int i = 0; i < 10; i++)
        myvector.push_back(i);

    typedef std::vector<int>::iterator iter_type;

    std::reverse_iterator<iter_type> rev_end(myvector.begin());
    std::reverse_iterator<iter_type> rev_begin(myvector.end());

    std::cout << "myvector:";
    for (iter_type it = rev_end.base(); it != rev_begin.base(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';

    return 0;
}
