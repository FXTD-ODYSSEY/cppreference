// cplusplus link https://cplusplus.com/reference/utility\make_pair
// make_pair example
#include <iostream> // std::cout
#include <utility> // std::pair

int main()
{
    std::pair<int, int> foo;
    std::pair<int, int> bar;

    foo = std::make_pair(10, 20);
    bar = std::make_pair(10.5, 'A'); // ok: implicit conversion from pair<double,char>

    std::cout << "foo: " << foo.first << ", " << foo.second << '\n';
    std::cout << "bar: " << bar.first << ", " << bar.second << '\n';

    return 0;
}
