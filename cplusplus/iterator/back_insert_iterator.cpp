// cplusplus link https://cplusplus.com/reference/iterator\back_insert_iterator
// back_insert_iterator example
#include <algorithm> // std::copy
#include <iostream> // std::cout
#include <iterator> // std::back_insert_iterator
#include <vector> // std::vector

int main()
{
    std::vector<int> foo, bar;
    for (int i = 1; i <= 5; i++) {
        foo.push_back(i);
        bar.push_back(i * 10);
    }

    std::back_insert_iterator<std::vector<int>> back_it(foo);

    std::copy(bar.begin(), bar.end(), back_it);

    std::cout << "foo:";
    for (std::vector<int>::iterator it = foo.begin(); it != foo.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';

    return 0;
}
