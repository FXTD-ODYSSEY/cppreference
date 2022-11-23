// cplusplus link https://cplusplus.com/reference/utility\move_if_noexcept
// move_if_noexcept example
#include <iostream> // std::cout
#include <utility> // std::move_if_noexcept

// function with lvalue and rvalue reference overloads:
template <class T>
void overloaded(T& x) { std::cout << "[lvalue]\n"; }
template <class T>
void overloaded(T&& x) { std::cout << "[rvalue]\n"; }

struct A { // copyable + moveable (noexcept)
    A()
    noexcept { }
    A(const A&)
    noexcept { }
    A(A&&)
    noexcept { }
};

struct B { // copyable + moveable (no noexcept)
    B() { }
    B(const B&) { }
    B(B&&) { }
};

struct C { // moveable only (no noexcept)
    C() { }
    C(C&&) { }
};

int main()
{
    std::cout << "A: ";
    overloaded(std::move_if_noexcept(A()));
    std::cout << "B: ";
    overloaded(std::move_if_noexcept(B()));
    std::cout << "C: ";
    overloaded(std::move_if_noexcept(C()));
    return 0;
}
