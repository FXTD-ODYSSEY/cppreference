// cppreference link https://en.cppreference.com/w/cpp/memory/shared_ptr/get
#include <iostream>
#include <memory>
#include <string_view>

int main()
{
    auto output = [](std::string_view msg, int const* pInt) {
        std::cout << msg << *pInt << " in " << pInt << "\n";
    };

    int* pInt = new int(42);
    std::shared_ptr<int> pShared = std::make_shared<int>(42);

    output("Naked pointer ", pInt);
    //  output("Shared pointer ", pShared); // compiler error
    output("Shared pointer with get() ", pShared.get());

    delete pInt;

    std::cout << "\nThe shared_ptr's aliasing constructor demo.\n";
    struct Base1 {
        int i1 {};
    };
    struct Base2 {
        int i2 {};
    };
    struct Derived : Base1, Base2 {
        int i3 {};
    };

    std::shared_ptr<Derived> p(new Derived());
    std::shared_ptr<Base2> q(p, static_cast<Base2*>(p.get()));
    std::cout << "q shares ownership with p, but points to Base2 subobject:\n"
              << "p.get(): " << p.get() << '\n'
              << "q.get(): " << q.get() << '\n'
              << "&(p->i1): " << &(p->i1) << '\n'
              << "&(p->i2): " << &(p->i2) << '\n'
              << "&(p->i3): " << &(p->i3) << '\n'
              << "&(q->i2): " << &(q->i2) << '\n';
}
