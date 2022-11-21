// cppreference link https://en.cppreference.com/w/cpp/types/is_function
#include <iostream>
#include <type_traits>

struct A {
    int fun() const&;
};

template <typename>
struct PM_traits { };

template <class T, class U>
struct PM_traits<U T::*> {
    using member_type = U;
};

int f();

int main()
{
    std::cout << std::boolalpha;
    std::cout << "#1 " << std::is_function_v<A> << '\n';
    std::cout << "#2 " << std::is_function_v<int(int)> << '\n';
    std::cout << "#3 " << std::is_function_v<decltype(f)> << '\n';
    std::cout << "#4 " << std::is_function_v<int> << '\n';

    using T = PM_traits<decltype(&A::fun)>::member_type; // T is int() const&
    std::cout << "#5 " << std::is_function_v<T> << '\n';
}
