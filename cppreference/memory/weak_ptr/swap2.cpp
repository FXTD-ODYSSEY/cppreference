// cppreference link https://en.cppreference.com/w/cpp/memory/weak_ptr/swap2
#include <iostream>
#include <memory>
#include <string>

struct Foo {
    Foo(int _val)
        : val(_val)
    {
        std::cout << "Foo...\n";
    }
    ~Foo() { std::cout << "~Foo...\n"; }
    std::string print() { return std::to_string(val); }
    int val;
};

int main()
{
    std::shared_ptr<Foo> sp1 = std::make_shared<Foo>(100);
    std::shared_ptr<Foo> sp2 = std::make_shared<Foo>(200);
    std::weak_ptr<Foo> wp1 = sp1;
    std::weak_ptr<Foo> wp2 = sp2;
    auto print = [&]() {
        auto p1 = wp1.lock();
        auto p2 = wp2.lock();
        std::cout << " p1=" << (p1 ? p1->print() : "nullptr");
        std::cout << " p2=" << (p2 ? p2->print() : "nullptr") << '\n';
    };
    print();

    std::swap(wp1, wp2);
    print();

    wp1.reset();
    print();

    std::swap(wp1, wp2);
    print();
}
