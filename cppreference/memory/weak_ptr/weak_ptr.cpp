// cppreference link https://en.cppreference.com/w/cpp/memory/weak_ptr/weak_ptr
#include <iostream>
#include <memory>

struct Foo { };

int main()
{
    std::weak_ptr<Foo> w_ptr;

    {
        auto ptr = std::make_shared<Foo>();
        w_ptr = ptr;
        std::cout << "w_ptr.use_count() inside scope: " << w_ptr.use_count() << '\n';
    }

    std::cout << "w_ptr.use_count() out of scope: " << w_ptr.use_count() << '\n';
    std::cout << "w_ptr.expired() out of scope: " << std::boolalpha << w_ptr.expired() << '\n';
}
