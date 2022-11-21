// cppreference link https://en.cppreference.com/w/cpp/memory/shared_ptr/shared_ptr
#include <iostream>
#include <memory>

struct Foo {
    int id { 0 };
    Foo(int i = 0)
        : id { i }
    {
        std::cout << "Foo::Foo(" << i << ")\n";
    }
    ~Foo() { std::cout << "Foo::~Foo(), id=" << id << '\n'; }
};

struct D {
    void operator()(Foo* p) const
    {
        std::cout << "Call delete from function object. Foo::id=" << p->id << '\n';
        delete p;
    }
};

int main()
{
    {
        std::cout << "1) constructor with no managed object\n";
        std::shared_ptr<Foo> sh1;
    }

    {
        std::cout << "2) constructor with object\n";
        std::shared_ptr<Foo> sh2(new Foo { 10 });
        std::cout << "sh2.use_count(): " << sh2.use_count() << '\n';
        std::shared_ptr<Foo> sh3(sh2);
        std::cout << "sh2.use_count(): " << sh2.use_count() << '\n';
        std::cout << "sh3.use_count(): " << sh3.use_count() << '\n';
    }

    {
        std::cout << "3) constructor with object and deleter\n";
        std::shared_ptr<Foo> sh4(new Foo { 11 }, D());
        std::shared_ptr<Foo> sh5(new Foo { 12 }, [](auto p) {
            std::cout << "Call delete from lambda... p->id=" << p->id << "\n";
            delete p;
        });
    }
}
