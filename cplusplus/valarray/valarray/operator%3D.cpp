// cplusplus link https://cplusplus.com/reference/valarray\valarray\operator%3D
// valarray assignment example
#include <iostream> // std::cout
#include <valarray> // std::valarray, std::slice

int main()
{ //    foo:      bar:

    std::valarray<int> foo(4); //  0 0 0 0
    std::valarray<int> bar(2, 4); //  0 0 0 0   2 2 2 2

    foo = bar; //  2 2 2 2   2 2 2 2
    bar = 5; //  2 2 2 2   5 5 5 5
    foo = bar[std::slice(0, 4, 1)]; //  5 5 5 5   5 5 5 5

    std::cout << "foo sums " << foo.sum() << '\n';

    return 0;
}
