// cppreference link https://en.cppreference.com/w/cpp/language/crtp
#include <cstdio>

#ifndef __cpp_explicit_this_parameter // Traditional syntax

template <class Derived>
struct Base {
    void name() { (static_cast<Derived*>(this))->impl(); }
};
struct D1 : public Base<D1> {
    void impl() { std::puts("D1::impl()"); }
};
struct D2 : public Base<D2> {
    void impl() { std::puts("D2::impl()"); }
};

void test()
{
    Base<D1> b1;
    b1.name();
    Base<D2> b2;
    b2.name();
    D1 d1;
    d1.name();
    D2 d2;
    d2.name();
}

#else // C++23 alternative syntax; https://godbolt.org/z/KbG8bq3oP

struct Base {
    void name(this auto& self) { self.impl(); }
};
struct D1 : public Base {
    void impl() { std::puts("D1::impl()"); }
};
struct D2 : public Base {
    void impl() { std::puts("D2::impl()"); }
};

void test()
{
    D1 d1;
    d1.name();
    D2 d2;
    d2.name();
}

#endif

int main()
{
    test();
}
