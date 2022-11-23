// cplusplus link https://cplusplus.com/reference/valarray\valarray\swap
// valarray::swap example
#include <iostream> // std::cout
#include <valarray> // std::valarray

int main()
{
    std::valarray<int> foo { 10, 20, 30, 40 };
    std::valarray<int> bar { 100, 200, 300 };

    foo.swap(bar);

    std::cout << "foo contains:";
    for (auto& x : foo)
        std::cout << ' ' << x;
    std::cout << '\n';

    std::cout << "bar contains:";
    for (auto& x : bar)
        std::cout << ' ' << x;
    std::cout << '\n';

    return 0;
}
