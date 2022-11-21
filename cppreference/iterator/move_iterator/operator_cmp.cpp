// cppreference link https://en.cppreference.com/w/cpp/iterator/move_iterator/operator_cmp
#include <compare>
#include <iostream>
#include <iterator>

int main()
{
    int a[] { 9, 8, 7, 6 };
    //            │  └───── x, y
    //            └──────── z

    std::move_iterator<int*>
        x { std::end(a) - 1 },
        y { std::end(a) - 1 },
        z { std::end(a) - 2 };

    std::cout
        << std::boolalpha
        << "*x == " << *x << '\n' // 6
        << "*y == " << *y << '\n' // 6
        << "*z == " << *z << '\n' // 7
        << "x == y? " << (x == y) << '\n' // true
        << "x!= y? " << (x != y) << '\n' // false
        << "x <  y? " << (x < y) << '\n' // false
        << "x <= y? " << (x <= y) << '\n' // true
        << "x == z? " << (x == z) << '\n' // false
        << "x!= z? " << (x != z) << '\n' // true
        << "x <  z? " << (x < z) << '\n' // false
        << "x <= z? " << (x <= z) << '\n' // false
        << "x <=> y == 0? " << (x <=> y == 0) << '\n' // true
        << "x <=> y <  0? " << (x <=> y < 0) << '\n' // false
        << "x <=> y >  0? " << (x <=> y > 0) << '\n' // false
        << "x <=> z == 0? " << (x <=> z == 0) << '\n' // false
        << "x <=> z <  0? " << (x <=> z < 0) << '\n' // true
        << "x <=> z >  0? " << (x <=> z > 0) << '\n' // false
        ;
}
