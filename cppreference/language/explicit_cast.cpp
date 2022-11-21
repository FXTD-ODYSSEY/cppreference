// cppreference link https://en.cppreference.com/w/cpp/language/explicit_cast
#include <cassert>
#include <iostream>

double f = 3.14;
unsigned int n1 = (unsigned int)f; // C-style cast
unsigned int n2 = unsigned(f); // function-style cast

class C1;
class C2;
C2* foo(C1* p)
{
    return (C2*)p; // casts incomplete type to incomplete type
}

void cpp23_decay_copy_demo()
{
    auto inc_print = [](int& x, const int& y) {
        ++x;
        std::cout << "x:" << x << ", y:" << y << '\n';
    };

    int p { 1 };
    inc_print(p, p); // prints x:2 y:2, because param y here is an alias of p
    int q { 1 };
    inc_print(q, auto { q }); // prints x:2 y:1, auto{q} (C++23) casts to prvalue,
                              // so the param y is a copy of q (not an alias of q)
}

// In this example, C-style cast is interpreted as static_cast
// even though it would work as reinterpret_cast
struct A { };
struct I1 : A { };
struct I2 : A { };
struct D : I1, I2 { };

int main()
{
    D* d = nullptr;
    //  A* a = (A*)d;                   // compile-time error
    A* a = reinterpret_cast<A*>(d); // this compiles
    assert(a == nullptr);

    cpp23_decay_copy_demo();
}
