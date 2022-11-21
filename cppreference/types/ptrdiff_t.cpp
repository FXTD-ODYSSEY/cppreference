// cppreference link https://en.cppreference.com/w/cpp/types/ptrdiff_t
#include <cstddef>
#include <iostream>
int main()
{
    const std::size_t N = 10;
    int* a = new int[N];
    int* end = a + N;
    for (std::ptrdiff_t i = N; i > 0; --i)
        std::cout << (*(end - i) = i) << ' ';
    delete[] a;
}
