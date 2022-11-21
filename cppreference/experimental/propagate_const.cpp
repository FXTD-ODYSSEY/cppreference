// cppreference link https://en.cppreference.com/w/cpp/experimental/propagate_const
#include <experimental/propagate_const>
#include <iostream>
#include <memory>

struct X {
    void g() const { std::cout << "g (const)\n"; }
    void g() { std::cout << "g (non-const)\n"; }
};

struct Y {
    Y()
        : m_ptrX(std::make_unique<X>())
    {
    }

    void f() const
    {
        std::cout << "f (const)\n";
        m_ptrX->g();
    }

    void f()
    {
        std::cout << "f (non-const)\n";
        m_ptrX->g();
    }

    std::experimental::propagate_const<std::unique_ptr<X>> m_ptrX;
};

int main()
{
    Y y;
    y.f();

    const Y cy;
    cy.f();
}
