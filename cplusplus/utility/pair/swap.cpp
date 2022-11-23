// cplusplus link https://cplusplus.com/reference/utility\pair\swap
// pair::swap example
#include <iostream> // std::cout
#include <utility> // std::pair

int main()
{
    std::pair<int, char> foo(10, 'a');
    std::pair<int, char> bar(90, 'z');

    foo.swap(bar);

    std::cout << "foo contains: " << foo.first;
    std::cout << " and " << foo.second << '\n';

    return 0;
}
