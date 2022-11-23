// cplusplus link https://cplusplus.com/reference/array\array\tuple_size
template <class Tpl>
class tuple_size;
template <class T, size_t N>
struct tuple_size<array<T, N>> : integral_constant<size_t, N> { };
