// cppreference link https://en.cppreference.com/w/cpp/language/array
#include <iostream>
#include <type_traits>
#include <utility>

void f(int (&&x)[2][3])
{
    std::cout << sizeof x << '\n';
}

struct X {
    int i[2][3];
} x;

template <typename T>
using identity = T;

int main()
{
    std::cout << sizeof X().i << '\n'; // size of the array
    f(X().i); // okay: binds to xvalue
    //  f(x.i);                                      // error: cannot bind to lvalue

    int a[2][3];
    f(std::move(a)); // okay: binds to xvalue

    using arr_t = int[2][3];
    f(arr_t {}); // okay: binds to prvalue
    f(identity<int[][3]> { { 1, 2, 3 }, { 4, 5, 6 } }); // okay: binds to prvalue
}
