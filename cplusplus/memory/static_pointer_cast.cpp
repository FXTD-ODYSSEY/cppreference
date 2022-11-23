// cplusplus link https://cplusplus.com/reference/memory\static_pointer_cast
// static_pointer_cast example
#include <iostream>
#include <memory>

struct A {
    static const char* static_type;
    const char* dynamic_type;
    A() { dynamic_type = static_type; }
};
struct B : A {
    static const char* static_type;
    B() { dynamic_type = static_type; }
};

const char* A::static_type = "class A";
const char* B::static_type = "class B";

int main()
{
    std::shared_ptr<A> foo;
    std::shared_ptr<B> bar;

    foo = std::make_shared<A>();

    // cast of potentially incomplete object, but ok as a static cast:
    bar = std::static_pointer_cast<B>(foo);

    std::cout << "foo's static  type: " << foo->static_type << '\n';
    std::cout << "foo's dynamic type: " << foo->dynamic_type << '\n';
    std::cout << "bar's static  type: " << bar->static_type << '\n';
    std::cout << "bar's dynamic type: " << bar->dynamic_type << '\n';

    return 0;
}
