// cplusplus link https://cplusplus.com/reference/memory\allocator
template <>
class allocator<void> {
public:
    typedef void* pointer;
    typedef const void* const_pointer;
    typedef void value_type;
    template <class U>
    struct rebind {
        typedef allocator<U> other;
    };
};
