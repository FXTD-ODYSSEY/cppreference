// cplusplus link https://cplusplus.com/reference/memory\allocator\rebind
template <class Type>
struct rebind {
    typedef allocator<Type> other;
};
