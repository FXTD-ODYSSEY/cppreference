// cplusplus link https://cplusplus.com/reference/iterator\front_inserter
// front_inserter example
#include <algorithm> // std::copy
#include <deque> // std::deque
#include <iostream> // std::cout
#include <iterator> // std::front_inserter

int main()
{
    std::deque<int> foo, bar;
    for (int i = 1; i <= 5; i++) {
        foo.push_back(i);
        bar.push_back(i * 10);
    }

    std::copy(bar.begin(), bar.end(), std::front_inserter(foo));

    std::cout << "foo contains:";
    for (std::deque<int>::iterator it = foo.begin(); it != foo.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';

    return 0;
}
