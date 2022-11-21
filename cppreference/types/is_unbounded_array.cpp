// cppreference link https://en.cppreference.com/w/cpp/types/is_unbounded_array
#include <iostream>
#include <type_traits>

#define OUT(...) std::cout << #__VA_ARGS__ << ": " << __VA_ARGS__ << '\n'

class A { };

int main()
{
    std::cout << std::boolalpha;
    OUT(std::is_unbounded_array_v<A>);
    OUT(std::is_unbounded_array_v<A[]>);
    OUT(std::is_unbounded_array_v<A[3]>);
    OUT(std::is_unbounded_array_v<float>);
    OUT(std::is_unbounded_array_v<int>);
    OUT(std::is_unbounded_array_v<int[]>);
    OUT(std::is_unbounded_array_v<int[3]>);
}
