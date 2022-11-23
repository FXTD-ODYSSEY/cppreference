// cplusplus link https://cplusplus.com/reference/future\shared_future
template <class R&>
shared_future<R&>; // specialization : T is a reference type (R&)
template <>
shared_future<void>; // specialization : T is void
