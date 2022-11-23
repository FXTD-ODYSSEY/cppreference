// cplusplus link https://cplusplus.com/reference/iterator\insert_iterator
// insert_iterator example
#include <algorithm> // std::copy
#include <iostream> // std::cout
#include <iterator> // std::insert_iterator
#include <list> // std::list

int main()
{
    std::list<int> foo, bar;
    for (int i = 1; i <= 5; i++) {
        foo.push_back(i);
        bar.push_back(i * 10);
    }

    std::list<int>::iterator it = foo.begin();
    advance(it, 3);

    std::insert_iterator<std::list<int>> insert_it(foo, it);

    std::copy(bar.begin(), bar.end(), insert_it);

    std::cout << "foo:";
    for (std::list<int>::iterator it = foo.begin(); it != foo.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';

    return 0;
}
