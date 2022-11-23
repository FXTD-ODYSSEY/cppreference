// cplusplus link https://cplusplus.com/reference/chrono\duration_values
template <class Rep>
struct duration_values {
    static constexpr Rep zero() { return Rep(0); }
    static constexpr Rep min() { return numeric_limits<Rep>::lowest(); }
    static constexpr Rep max() { return numeric_limits<Rep>::max(); }
}
