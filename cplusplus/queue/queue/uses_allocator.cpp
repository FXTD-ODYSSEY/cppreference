// cplusplus link https://cplusplus.com/reference/queue\queue\uses_allocator
template <class T, class Container, class Alloc>
struct uses_allocator<queue<T, Container>, Alloc>
    : uses_allocator<Container, Alloc>::type { }
