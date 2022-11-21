// cppreference link https://en.cppreference.com/w/cpp/memory/unique_ptr/hash
#include <functional>
#include <iostream>
#include <memory>

struct Foo {
    Foo(int nr) { std::cout << "Foo(" << nr << ")\n"; }
    ~Foo() { std::cout << "~Foo()\n"; }
    bool operator==(const Foo& other) { return nr == other.nr; };
    int nr;
};

int main()
{
    std::cout << std::boolalpha;
    Foo* foo = new Foo(5);
    std::unique_ptr<Foo> up(foo);

    std::cout << "     hash(up): " << std::hash<std::unique_ptr<Foo>>()(up) << '\n';
    std::cout << "    hash(foo): " << std::hash<Foo*>()(foo) << '\n';
    std::cout << "    *up==*foo: " << (*up == *foo) << '\n';

    std::unique_ptr<Foo> other = std::make_unique<Foo>(5);
    std::cout << "     hash(up): " << std::hash<std::unique_ptr<Foo>>()(up) << '\n';
    std::cout << "  hash(other): " << std::hash<std::unique_ptr<Foo>>()(other) << '\n';
    std::cout << "  *up==*other: " << (*up == *other) << '\n';
}
