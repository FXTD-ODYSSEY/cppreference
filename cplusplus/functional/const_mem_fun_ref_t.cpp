// cplusplus link https://cplusplus.com/reference/functional\const_mem_fun_ref_t
template <class S, class T>
class const_mem_fun_ref_t : public unary_function<T, S> {
    S (T::*pmem)
    () const;

public:
    explicit const_mem_fun_ref_t(S (T::*p)() const)
        : pmem(p)
    {
    }
    S operator()(T& p) const
    {
        return (p.*pmem)();
    }
};
