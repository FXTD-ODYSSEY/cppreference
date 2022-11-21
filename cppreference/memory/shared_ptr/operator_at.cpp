// cppreference link https://en.cppreference.com/w/cpp/memory/shared_ptr/operator_at
#include <cstddef>
#include <iostream>
#include <memory>
int main()
{
    const std::size_t arr_size = 10;
    std::shared_ptr<int[]> pis(new int[10] { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 });
    for (std::size_t i = 0; i < arr_size; i++) {
        std::cout << pis[i] << ' ';
    }
}
