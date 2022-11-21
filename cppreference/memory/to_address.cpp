// cppreference link https://en.cppreference.com/w/cpp/memory/to_address
#include <memory>

template <class A>
auto allocator_new(A& a)
{
    auto p = a.allocate(1);
    try {
        std::allocator_traits<A>::construct(a, std::to_address(p));
    } catch (...) {
        a.deallocate(p, 1);
        throw;
    }
    return p;
}

template <class A>
void allocator_delete(A& a, typename std::allocator_traits<A>::pointer p)
{
    std::allocator_traits<A>::destroy(a, std::to_address(p));
    a.deallocate(p, 1);
}

int main()
{
    std::allocator<int> a;
    auto p = allocator_new(a);
    allocator_delete(a, p);
}
