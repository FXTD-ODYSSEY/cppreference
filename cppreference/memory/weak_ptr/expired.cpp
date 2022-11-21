// cppreference link https://en.cppreference.com/w/cpp/memory/weak_ptr/expired
#include <iostream>
#include <memory>

std::weak_ptr<int> gw;

void f()
{
    if (!gw.expired()) {
        std::cout << "gw is valid\n";
    } else {
        std::cout << "gw is expired\n";
    }
}

int main()
{
    {
        auto sp = std::make_shared<int>(42);
        gw = sp;

        f();
    }

    f();
}
