// cplusplus link https://cplusplus.com/reference/array\array\tuple_element
template <size_t I, class Tpl>
class tuple_element;
template <size_t I, class T, size_t N>
struct tuple_element<I, array<T, N>> {
    typedef T type;
};
