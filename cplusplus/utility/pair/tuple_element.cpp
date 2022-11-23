// cplusplus link https://cplusplus.com/reference/utility\pair\tuple_element
template <size_t I, class Tpl>
class tuple_element;

template <class T1, class T2>
struct tuple_element<0, pair<T1, T2>> {
    typedef T1 type;
};

template <class T1, class T2>
struct tuple_element<1, pair<T1, T2>> {
    typedef T2 type;
};
