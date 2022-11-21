// cppreference link https://en.cppreference.com/w/cpp/chrono/duration/common_type
#include <chrono>
#include <iostream>
#include <type_traits>

// std::chrono already finds the greatest common divisor,
// likely using std::common_type<>. We make the type
// deduction externally.

template <typename T, typename S>
constexpr auto durationDiff(const T& t, const S& s)
    -> typename std::common_type<T, S>::type
{
    typedef typename std::common_type<T, S>::type Common;
    return Common(t) - Common(s);
}

int main()
{
    using namespace std::literals;

    constexpr auto ms = 30ms;
    constexpr auto us = 1100us;
    constexpr auto diff = durationDiff(ms, us);

    std::cout << ms.count() << "ms - " << us.count() << "μs = " << diff.count()
              << (std::is_same<decltype(diff), decltype(ms)>() ? "ms" : "μs")
              << '\n';
}
