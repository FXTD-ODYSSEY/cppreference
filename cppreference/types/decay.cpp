// cppreference link https://en.cppreference.com/w/cpp/types/decay
#include <type_traits>

template <typename T, typename U>
constexpr bool is_decay_equ = std::is_same_v<std::decay_t<T>, U>;

int main()
{
    static_assert(
        is_decay_equ<int, int> && !is_decay_equ<int, float> && is_decay_equ<int&, int> && is_decay_equ<int&&, int> && is_decay_equ<const int&, int> && is_decay_equ<int[2], int*> && !is_decay_equ<int[4][2], int*> && !is_decay_equ<int[4][2], int**> && is_decay_equ<int[4][2], int(*)[2]> && is_decay_equ<int(int), int (*)(int)>);
}
