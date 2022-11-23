// cplusplus link https://cplusplus.com/reference/functional\mem_fun1_ref_t
template <class S, class T, class A>
class mem_fun1_ref_t : public binary_function<T, A, S> {
    S (T::*pmem)
    (A);

public:
    explicit mem_fun1_ref_t(S (T::*p)(A))
        : pmem(p)
    {
    }
    S operator()(T& p, A x) const
    {
        return (p.*pmem)(x);
    }
};
