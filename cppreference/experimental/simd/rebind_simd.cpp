// cppreference link https://en.cppreference.com/w/cpp/experimental/simd/rebind_simd
#include <experimental/simd>
#include <iostream>

namespace stdx = std::experimental;
using floatv = stdx::native_simd<float>;

// use double precision internally
floatv dp(floatv x)
{
    using doublev = stdx::rebind_simd_t<double, floatv>;
    return stdx::static_simd_cast<floatv>(stdx::simd_cast<doublev>(x) - 1.234);
}

template <class T>
stdx::resize_simd_t<T::size() / 2, T> partial_reduction(T x)
{
    auto [lo, hi] = stdx::split<stdx::resize_simd_t<T::size() / 2, T>>(x);
    return lo + hi;
}

int main()
{
    floatv x([](auto i) { return 1.234f + std::numeric_limits<float>::epsilon() * i; });
    x = dp(x);
    const auto y = partial_reduction(x);
    for (unsigned i = 0; i < y.size(); ++i)
        std::cout << y[i] << ' ';
    std::cout << '\n';
}
