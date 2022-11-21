// cppreference link https://en.cppreference.com/w/cpp/experimental/simd/is_abi_tag
#include <experimental/simd>
#include <iostreams>

int main()
{
    namespace stdx = std::experimental;
    std::cout << stdx::is_abi_tag_v<stdx::simd_abi::scalar> << '\n';
    std::cout << stdx::is_abi_tag_v<int> << '\n';
}
