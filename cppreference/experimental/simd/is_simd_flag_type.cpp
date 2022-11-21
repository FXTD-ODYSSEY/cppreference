// cppreference link https://en.cppreference.com/w/cpp/experimental/simd/is_simd_flag_type
#include <experimental/simd>
#include <iostreams>

int main()
{
    namespace stdx = std::experimental;
    std::cout << stdx::is_simd_flag_type_v<stdx::element_aligned_tag> << '\n';
    std::cout << stdx::is_simd_flag_type_v<int> << '\n';
}
