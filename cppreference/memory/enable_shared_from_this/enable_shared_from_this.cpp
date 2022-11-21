// cppreference link https://en.cppreference.com/w/cpp/memory/enable_shared_from_this/enable_shared_from_this
#include <memory>

struct Foo : public std::enable_shared_from_this<Foo> {
    Foo() { } // implicitly calls enable_shared_from_this constructor
    std::shared_ptr<Foo> getFoo() { return shared_from_this(); }
};

int main()
{
    std::shared_ptr<Foo> pf1(new Foo);
    auto pf2 = pf1->getFoo(); // shares ownership of object with pf1
}
