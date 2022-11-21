// cppreference link https://en.cppreference.com/w/cpp/named_req/FunctionObject
#include <iostream>

void foo(int x) { std::cout << "foo(" << x << ")\n"; }

int main()
{
    void (*fp)(int) = foo;
    fp(1); // calls foo using the pointer to function

    struct S {
        void operator()(int x) const { std::cout << "S::operator(" << x << ")\n"; }
    } s;
    s(2); // calls s.operator()
    s.operator()(3); // the same

    auto lam = [](int x) { std::cout << "lambda(" << x << ")\n"; };
    lam(4); // calls the lambda
    lam.operator()(5); // the same
}
