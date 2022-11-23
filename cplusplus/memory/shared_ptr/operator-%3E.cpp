// cplusplus link https://cplusplus.com/reference/memory\shared_ptr\operator-%3E
// shared_ptr::operator->
#include <iostream>
#include <memory>

struct C {
    int a;
    int b;
};

int main()
{
    std::shared_ptr<C> foo;
    std::shared_ptr<C> bar(new C);

    foo = bar;

    foo->a = 10;
    bar->b = 20;

    if (foo)
        std::cout << "foo: " << foo->a << ' ' << foo->b << '\n';
    if (bar)
        std::cout << "bar: " << bar->a << ' ' << bar->b << '\n';

    return 0;
}
