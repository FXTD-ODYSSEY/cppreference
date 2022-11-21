// cppreference link https://en.cppreference.com/w/cpp/experimental/conjunction
// func is enabled if all Ts... have the same type
template <typename T, typename... Ts>
std::enable_if_t<std::experimental::conjunction_v<std::is_same<T, Ts>...>>
func(T, Ts...)
{
    // TODO something to show
}
