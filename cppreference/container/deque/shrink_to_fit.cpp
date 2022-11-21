// cppreference link https://en.cppreference.com/w/cpp/container/deque/shrink_to_fit
#include <deque>
#include <iostream>
#include <new>

// minimal C++11 allocator with debug output
template <class Tp>
struct NAlloc {
    typedef Tp value_type;
    NAlloc() = default;
    template <class T>
    NAlloc(const NAlloc<T>&) { }
    Tp* allocate(std::size_t n)
    {
        n *= sizeof(Tp);
        std::cout << "allocating " << n << " bytes\n";
        return static_cast<Tp*>(::operator new(n));
    }
    void deallocate(Tp* p, std::size_t n)
    {
        std::cout << "deallocating " << n * sizeof *p << " bytes\n";
        ::operator delete(p);
    }
};
template <class T, class U>
bool operator==(const NAlloc<T>&, const NAlloc<U>&) { return true; }
template <class T, class U>
bool operator!=(const NAlloc<T>&, const NAlloc<U>&) { return false; }

int main()
{
    /* std::queue has no capacity() function (like std::vector),
     * because of this we use a custom allocator to show
     * the working of shrink_to_fit.  */
    std::cout << "Default-construct deque:\n";
    std::deque<int, NAlloc<int>> deq;

    std::cout << "\nAdd 300 elements:\n";
    for (int i = 1000; i < 1300; ++i)
        deq.push_back(i);

    std::cout << "\nPop 100 elements:\n";
    for (int i = 0; i < 100; ++i)
        deq.pop_front();

    std::cout << "\nRun shrink_to_fit:\n";
    deq.shrink_to_fit();

    std::cout << "\nDestroy deque as it goes out of scope:\n";
}
