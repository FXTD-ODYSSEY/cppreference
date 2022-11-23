// cplusplus link https://cplusplus.com/reference/mutex\once_flag
struct once_flag {
    constexpr once_flag() noexcept;
    once_flag(const once_flag&) = delete;
    once_flag& operator=(const once_flag&) = delete;
};
