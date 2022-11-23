// cplusplus link https://cplusplus.com/reference/iterator\make_move_iterator
// make_move_iterator example
#include <algorithm> // std::copy
#include <iostream> // std::cout
#include <iterator> // std::make_move_iterator
#include <string> // std::string
#include <vector> // std::vector

int main()
{
    std::vector<std::string> foo(3);
    std::vector<std::string> bar { "one", "two", "three" };

    std::copy(make_move_iterator(bar.begin()),
        make_move_iterator(bar.end()),
        foo.begin());

    // bar now contains unspecified values; clear it:
    bar.clear();

    std::cout << "foo:";
    for (std::string& x : foo)
        std::cout << ' ' << x;
    std::cout << '\n';

    return 0;
}
