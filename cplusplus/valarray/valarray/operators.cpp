// cplusplus link https://cplusplus.com/reference/valarray\valarray\operators
// valarray operators example
#include <iostream> // std::cout
#include <valarray> // std::valarray

int main()
{
    int init[] = { 10, 20, 30, 40 };
    //     foo:           bar:

    std::valarray<int> foo(init, 4); //  10 20 30 40
    std::valarray<int> bar(25, 4); //  10 20 30 40    25 25 25 25

    bar += foo; //  10 20 30 40    35 45 55 65

    foo = bar + 10; //  45 55 65 75    35 45 55 65

    foo -= 10; //  35 45 55 65    35 45 55 65

    std::valarray<bool> comp = (foo == bar);

    if (comp.min() == true)
        std::cout << "foo and bar are equal.\n";
    else
        std::cout << "foo and bar are not equal.\n";

    return 0;
}
