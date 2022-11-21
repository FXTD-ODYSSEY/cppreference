// cppreference link https://en.cppreference.com/w/cpp/atomic/atomic_is_lock_free
#include <atomic>
#include <iostream>
#include <utility>

struct A {
    int a[100];
};
struct B {
    int x, y;
};
int main()
{
    std::atomic<A> a;
    std::atomic<B> b;
    std::cout << std::boolalpha
              << "std::atomic<A> is lock free? "
              << std::atomic_is_lock_free(&a) << '\n'
              << "std::atomic<B> is lock free? "
              << std::atomic_is_lock_free(&b) << '\n';
}
