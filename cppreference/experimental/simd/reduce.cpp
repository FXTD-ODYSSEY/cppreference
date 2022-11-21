// cppreference link https://en.cppreference.com/w/cpp/experimental/simd/reduce
#include <array>
#include <cstddef>
#include <experimental/simd>
#include <iostream>
#include <numeric>

namespace stdx = std::experimental;

int main()
{
    using V = stdx::native_simd<float>;
    alignas(stdx::memory_alignment_v<V>) std::array<float, 1024> data;
    std::iota(data.begin(), data.end(), 0);
    V acc = 0;
    for (std::size_t i = 0; i < data.size(); i += acc.size()) {
        acc += V(&data[i], stdx::vector_aligned);
    }
    std::cout << "reduce(" << acc[0];
    for (std::size_t i = 1; i < V::size(); ++i) {
        std::cout << ", " << acc[i];
    }
    std::cout << ")\n= (1024 - 1) * 1024 / 2\n= " << reduce(acc) << '\n';
}
