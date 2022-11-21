// cppreference link https://en.cppreference.com/w/cpp/memory/align
#include <iostream>
#include <memory>

template <std::size_t N>
struct MyAllocator {
    char data[N];
    void* p;
    std::size_t sz;
    MyAllocator()
        : p(data)
        , sz(N)
    {
    }
    template <typename T>
    T* aligned_alloc(std::size_t a = alignof(T))
    {
        if (std::align(a, sizeof(T), p, sz)) {
            T* result = reinterpret_cast<T*>(p);
            p = (char*)p + sizeof(T);
            sz -= sizeof(T);
            return result;
        }
        return nullptr;
    }
};

int main()
{
    MyAllocator<64> a;
    std::cout << "allocated a.data at " << (void*)a.data
              << " (" << sizeof a.data << " bytes)\n";

    // allocate a char
    if (char* p = a.aligned_alloc<char>()) {
        *p = 'a';
        std::cout << "allocated a char at " << (void*)p << '\n';
    }

    // allocate an int
    if (int* p = a.aligned_alloc<int>()) {
        *p = 1;
        std::cout << "allocated an int at " << (void*)p << '\n';
    }

    // allocate an int, aligned at 32-byte boundary
    if (int* p = a.aligned_alloc<int>(32)) {
        *p = 2;
        std::cout << "allocated an int at " << (void*)p << " (32 byte alignment)\n";
    }
}
