// cplusplus link https://cplusplus.com/reference/tuple\tuple\uses_allocator
template <class... Types, class Alloc>
struct uses_allocator<tuple<Types...>, Alloc> : true_type { };
