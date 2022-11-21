// cppreference link https://en.cppreference.com/w/cpp/types/is_scalar
#include <iostream>
#include <type_traits>
#include <typeinfo>
#include <utility>

template <typename Head, typename... Tail>
void are_scalars(Head&& head, Tail&&... tail)
{
    using T = std::decay_t<decltype(head)>;

    std::cout << typeid(T).name() << " is "
              << (std::is_scalar_v<T> ? "" : "not ")
              << "a scalar\n";

    if constexpr (sizeof...(Tail)) {
        are_scalars(std::forward<decltype(tail)>(tail)...);
    }
}

int main()
{
    struct S {
        int m;
    } s;
    int S::*mp = &S::m;
    enum class E { e };

    are_scalars(42, 3.14, E::e, "str", mp, nullptr, s);
}
