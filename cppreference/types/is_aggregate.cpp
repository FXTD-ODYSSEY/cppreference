// cppreference link https://en.cppreference.com/w/cpp/types/is_aggregate
#include <new>
#include <type_traits>
#include <utility>

// constructs a T at the uninitialized memory pointed to by p
// using list-initialization for aggregates and non-list initialization otherwise
template <class T, class... Args>
T* construct(T* p, Args&&... args)
{
    if constexpr (std::is_aggregate_v<T>) {
        return ::new (static_cast<void*>(p)) T { std::forward<Args>(args)... };
    } else {
        return ::new (static_cast<void*>(p)) T(std::forward<Args>(args)...);
    }
}

struct A {
    int x, y;
};
struct B {
    B(int, const char*) { }
};

int main()
{
    std::aligned_union_t<1, A, B> storage;
    [[maybe_unused]] A* a = construct(reinterpret_cast<A*>(&storage), 1, 2);
    [[maybe_unused]] B* b = construct(reinterpret_cast<B*>(&storage), 1, "hello");
}
