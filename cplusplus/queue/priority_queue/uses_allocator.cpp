// cplusplus link https://cplusplus.com/reference/queue\priority_queue\uses_allocator
template <class T, class Container, class Compare, class Alloc>
struct uses_allocator<priority_queue<T, Container, Compare>, Alloc>
    : uses_allocator<Container, Alloc>::type { }
