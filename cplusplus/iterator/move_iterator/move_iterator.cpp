// cplusplus link https://cplusplus.com/reference/iterator\move_iterator\move_iterator
// move_iterator example
#include <algorithm> // std::copy
#include <iostream> // std::cout
#include <iterator> // std::move_iterator
#include <string> // std::string
#include <vector> // std::vector

int main()
{
    std::vector<std::string> foo(3);
    std::vector<std::string> bar { "one", "two", "three" };

    typedef std::vector<std::string>::iterator Iter;

    std::copy(std::move_iterator<Iter>(bar.begin()),
        std::move_iterator<Iter>(bar.end()),
        foo.begin());

    // bar now contains unspecified values; clear it:
    bar.clear();

    std::cout << "foo:";
    for (std::string& x : foo)
        std::cout << ' ' << x;
    std::cout << '\n';

    return 0;
}
