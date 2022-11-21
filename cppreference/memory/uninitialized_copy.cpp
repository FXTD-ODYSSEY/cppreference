// cppreference link https://en.cppreference.com/w/cpp/memory/uninitialized_copy
#include <cstdlib>
#include <iostream>
#include <memory>
#include <string>

int main()
{
    const char* v[] = { "This", "is", "an", "example" };

    auto sz = std::size(v);

    if (void* pbuf = std::aligned_alloc(alignof(std::string), sizeof(std::string) * sz)) {
        try {
            auto first = static_cast<std::string*>(pbuf);
            auto last = std::uninitialized_copy(std::begin(v), std::end(v), first);

            for (auto it = first; it != last; ++it)
                std::cout << *it << '_';
            std::cout << '\n';

            std::destroy(first, last);
        } catch (...) {
        }
        std::free(pbuf);
    }
}
