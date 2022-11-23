// cplusplus link https://cplusplus.com/reference/utility\swap
// swap algorithm example (C++11)
#include <iostream> // std::cout
#include <utility> // std::swap

int main()
{

    int x = 10, y = 20; // x:10 y:20
    std::swap(x, y); // x:20 y:10

    int foo[4]; // foo: ?  ?  ?  ?
    int bar[] = { 10, 20, 30, 40 }; // foo: ?  ?  ?  ?    bar: 10 20 30 40
    std::swap(foo, bar); // foo: 10 20 30 40   bar: ?  ?  ?  ?

    std::cout << "foo contains:";
    for (int i : foo)
        std::cout << ' ' << i;
    std::cout << '\n';

    return 0;
}
