// cppreference link https://en.cppreference.com/w/cpp/language/static_assert
#include <type_traits>

static_assert(03301 == 1729); // since C++17 the message string is optional

template <class T>
void swap(T& a, T& b) noexcept
{
    static_assert(std::is_copy_constructible_v<T>,
        "Swap requires copying");
    static_assert(std::is_nothrow_copy_constructible_v<T> && std::is_nothrow_copy_assignable_v<T>,
        "Swap requires nothrow copy/assign");
    auto c = b;
    b = a;
    a = c;
}

template <class T>
struct data_structure {
    static_assert(std::is_default_constructible_v<T>,
        "Data structure requires default-constructible elements");
};

struct no_copy {
    no_copy(const no_copy&) = delete;
    no_copy() = default;
};

struct no_default {
    no_default() = delete;
};

int main()
{
    int a, b;
    swap(a, b);

    no_copy nc_a, nc_b;
    swap(nc_a, nc_b); // 1

    [[maybe_unused]] data_structure<int> ds_ok;
    [[maybe_unused]] data_structure<no_default> ds_error; // 2
}
