// cplusplus link https://cplusplus.com/reference/stack\stack\uses_allocator
template <class T, class Container, class Alloc>
struct uses_allocator<stack<T, Container>, Alloc>
    : uses_allocator<Container, Alloc>::type { }
