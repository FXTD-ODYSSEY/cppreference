// cppreference link https://en.cppreference.com/w/cpp/memory/ranges/destroy_at
#include <iostream>
#include <memory>
#include <new>

struct Tracer {
    int value;
    ~Tracer() { std::cout << value << " destructed\n"; }
};

int main()
{
    alignas(Tracer) unsigned char buffer[sizeof(Tracer) * 8];

    for (int i = 0; i < 8; ++i)
        new (buffer + sizeof(Tracer) * i) Tracer { i }; // manually construct objects

    auto ptr = std::launder(reinterpret_cast<Tracer*>(buffer));

    for (int i = 0; i < 8; ++i)
        std::ranges::destroy_at(ptr + i);
}
