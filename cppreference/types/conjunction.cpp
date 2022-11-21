// cppreference link https://en.cppreference.com/w/cpp/types/conjunction
#include <iostream>
#include <type_traits>

// func is enabled if all Ts... have the same type as T
template <typename T, typename... Ts>
std::enable_if_t<std::conjunction_v<std::is_same<T, Ts>...>>
func(T, Ts...)
{
    std::cout << "all types in pack are T\n";
}

// otherwise
template <typename T, typename... Ts>
std::enable_if_t<!std::conjunction_v<std::is_same<T, Ts>...>>
func(T, Ts...)
{
    std::cout << "not all types in pack are T\n";
}

int main()
{
    func(1, 2, 3);
    func(1, 2, "hello!");
}
