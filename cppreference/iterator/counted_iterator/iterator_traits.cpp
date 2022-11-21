// cppreference link https://en.cppreference.com/w/cpp/iterator/counted_iterator/iterator_traits
#include <iterator>
#include <list>
#include <type_traits>
#include <vector>

int main()
{
    std::vector v { 1, 2, 3, 4 };
    std::list l { 1, 2, 3, 4 };
    std::counted_iterator iv { v.begin(), 3 };
    std::counted_iterator il { l.begin(), 3 };
    static_assert(std::is_same<int*, std::iterator_traits<decltype(iv)>::pointer>());
    static_assert(std::is_same<void, std::iterator_traits<decltype(il)>::pointer>());
}
