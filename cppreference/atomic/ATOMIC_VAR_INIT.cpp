// cppreference link https://en.cppreference.com/w/cpp/atomic/ATOMIC_VAR_INIT
#include <atomic>
#include <iostream>

int main()
{
    std::atomic<int> a = ATOMIC_VAR_INIT(1);
    // std::atomic<int> a(1);   // C++-only alternative
    std::cout << "Initialized std::atomic<int> as: " << a << '\n';
}
