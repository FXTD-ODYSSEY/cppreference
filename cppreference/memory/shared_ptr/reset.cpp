// cppreference link https://en.cppreference.com/w/cpp/memory/shared_ptr/reset
#include <iostream>
#include <memory>

struct Foo {
    Foo(int n = 0) noexcept
        : bar(n)
    {
        std::cout << "Foo::Foo(), bar = " << bar << " @ " << this << '\n';
    }
    ~Foo()
    {
        std::cout << "Foo::~Foo(), bar = " << bar << " @ " << this << "\n";
    }
    int getBar() const noexcept { return bar; }

private:
    int bar;
};

int main()
{
    std::cout << "1) unique ownership\n";
    {
        std::shared_ptr<Foo> sptr = std::make_shared<Foo>(100);

        std::cout << "Foo::bar = " << sptr->getBar() << ", use_count() = "
                  << sptr.use_count() << '\n';

        // Reset the shared_ptr without handing it a fresh instance of Foo.
        // The old instance will be destroyed after this call.
        std::cout << "call sptr.reset()...\n";
        sptr.reset(); // calls Foo's destructor here
        std::cout << "After reset(): use_count() = " << sptr.use_count()
                  << ", sptr = " << sptr << '\n';
    } // No call to Foo's destructor, it was done earlier in reset().

    std::cout << "\n2) unique ownership\n";
    {
        std::shared_ptr<Foo> sptr = std::make_shared<Foo>(200);

        std::cout << "Foo::bar = " << sptr->getBar() << ", use_count() = "
                  << sptr.use_count() << '\n';

        // Reset the shared_ptr, hand it a fresh instance of Foo.
        // The old instance will be destroyed after this call.
        std::cout << "call sptr.reset()...\n";
        sptr.reset(new Foo { 222 });
        std::cout << "After reset(): use_count() = " << sptr.use_count()
                  << ", sptr = " << sptr << "\nLeaving the scope...\n";
    } // Calls Foo's destructor.

    std::cout << "\n3) multiple ownership\n";
    {
        std::shared_ptr<Foo> sptr1 = std::make_shared<Foo>(300);
        std::shared_ptr<Foo> sptr2 = sptr1;
        std::shared_ptr<Foo> sptr3 = sptr2;

        std::cout << "Foo::bar = " << sptr1->getBar() << ", use_count() = "
                  << sptr1.use_count() << '\n';

        // Reset the shared_ptr sptr1, hand it a fresh instance of Foo.
        // The old instance will stay shared between sptr2 and sptr3.
        std::cout << "call sptr1.reset()...\n";
        sptr1.reset(new Foo { 333 });

        std::cout << "After reset():\n"
                  << "sptr1.use_count() = " << sptr1.use_count()
                  << ", sptr1 @ " << sptr1 << '\n'
                  << "sptr2.use_count() = " << sptr2.use_count()
                  << ", sptr2 @ " << sptr2 << '\n'
                  << "sptr3.use_count() = " << sptr3.use_count()
                  << ", sptr3 @ " << sptr3 << '\n'
                  << "Leaving the scope...\n";
    } // Calls two destructors of: 1) Foo owned by sptr1,
      // 2) Foo shared between sptr2/sptr3.
}
