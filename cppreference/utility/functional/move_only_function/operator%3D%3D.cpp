// cppreference link https://en.cppreference.com/w/cpp/utility/functional/move_only_function/operator%3D%3D
#include <functional>
#include <iostream>

using SomeVoidFunc = std::move_only_function<void(int) const>;

class C {
public:
    C() = default;
    C(SomeVoidFunc func)
        : void_func_(std::move(func))
    {
    }

    void default_func(int i) const { std::cout << i << '\n'; };

    void operator()() const
    {
        if (void_func_ == nullptr) // specialized compare with nullptr
            default_func(7);
        else
            void_func_(7);
    }

private:
    SomeVoidFunc void_func_ {};
};

void user_func(int i)
{
    std::cout << (i + 1) << '\n';
}

int main()
{
    C c1;
    C c2(user_func);
    c1();
    c2();
}
