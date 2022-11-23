// cplusplus link https://cplusplus.com/reference/functional\mem_fun_t
template <class S, class T>
class mem_fun_t : public unary_function<T*, S> {
    S (T::*pmem)
    ();

public:
    explicit mem_fun_t(S (T::*p)())
        : pmem(p)
    {
    }
    S operator()(T* p) const
    {
        return (p->*pmem)();
    }
};
