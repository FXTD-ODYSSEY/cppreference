// cppreference link https://en.cppreference.com/w/cpp/memory/c/realloc
#include <cassert>
#include <cstdlib>
#include <new>

class MallocDynamicBuffer {
    char* p;

public:
    explicit MallocDynamicBuffer(std::size_t initial = 0)
        : p(nullptr)
    {
        resize(initial);
    }
    ~MallocDynamicBuffer() { std::free(p); }
    void resize(std::size_t newSize)
    {
        if (newSize == 0) { // this check is not strictly needed,
            std::free(p); // but zero-size realloc is deprecated in C
            p = nullptr;
        } else {
            if (void* mem = std::realloc(p, newSize))
                p = static_cast<char*>(mem);
            else
                throw std::bad_alloc();
        }
    }
    char& operator[](size_t n) { return p[n]; }
    char operator[](size_t n) const { return p[n]; }
};

int main()
{
    MallocDynamicBuffer buf1(1024);
    buf1[5] = 'f';
    buf1.resize(10); // shrink
    assert(buf1[5] == 'f');
    buf1.resize(1024); // grow
    assert(buf1[5] == 'f');
}
