// cplusplus link https://cplusplus.com/reference/utility\pair\tuple_size
template <class Tpl>
class tuple_size;
template <class T1, class T2>
struct tuple_size<pair<T1, T2>> : integral_constant<size_t, 2> { };
