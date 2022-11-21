// cppreference link https://en.cppreference.com/w/cpp/experimental/simd/is_simd
#include <experimental/simd>
#include <iostream>

int main()
{
    namespace stdx = std::experimental;
    std::cout
        << std::boolalpha
        << stdx::is_simd_v<stdx::simd<float>> << '\n';
    << stdx::is_simd_v<int> << '\n';
    << stdx::is_simd_mask_v<stdx::simd_mask<float>> << '\n';
    << stdx::is_simd_mask_v<int> << '\n';
}
