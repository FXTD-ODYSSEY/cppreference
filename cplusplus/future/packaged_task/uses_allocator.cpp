// cplusplus link https://cplusplus.com/reference/future\packaged_task\uses_allocator
template <class Ret, class Alloc>
struct uses_allocator<packaged_task<Ret>, Alloc> : true_type { };
