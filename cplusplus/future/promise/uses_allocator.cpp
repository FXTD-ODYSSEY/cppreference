// cplusplus link https://cplusplus.com/reference/future\promise\uses_allocator
template <class T, class Alloc>
struct uses_allocator<promise<T>, Alloc> : true_type { };
