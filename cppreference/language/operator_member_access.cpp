// cppreference link https://en.cppreference.com/w/cpp/language/operator_member_access
#include <iostream>

struct S {
    S(int n)
        : mi(n)
    {
    }
    mutable int mi;
    int f(int n) { return mi + n; }
};

struct D : public S {
    D(int n)
        : S(n)
    {
    }
};

int main()
{
    int S::*pmi = &S::mi;
    int (S::*pf)(int) = &S::f;

    const S s(7);
    //  s.*pmi = 10; // error: cannot modify through mutable
    std::cout << s.*pmi << '\n';

    D d(7); // base pointers work with derived object
    D* pd = &d;
    std::cout << (d.*pf)(7) << ' '
              << (pd->*pf)(8) << '\n';
}
