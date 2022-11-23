// cplusplus link https://cplusplus.com/reference/iterator\move_iterator\operator%5B%5D
// move_iterator::operator[] example
#include <iostream> // std::cout
#include <iterator> // std::move_iterator
#include <string> // std::string
#include <vector> // std::vector

int main()
{
    std::string str[] = { "one", "two", "three" };
    std::vector<std::string> foo;

    std::move_iterator<std::string*> it(str);

    for (int i = 0; i < 3; ++i)
        foo.push_back(it[i]);

    std::cout << "foo:";
    for (std::string& x : foo)
        std::cout << ' ' << x;
    std::cout << '\n';

    return 0;
}
