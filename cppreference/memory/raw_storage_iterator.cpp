// cppreference link https://en.cppreference.com/w/cpp/memory/raw_storage_iterator
#include <algorithm>
#include <iostream>
#include <memory>
#include <string>

int main()
{
    const std::string s[] = { "This", "is", "a", "test", "." };
    std::string* p = std::allocator<std::string>().allocate(5);

    std::copy(std::begin(s), std::end(s),
        std::raw_storage_iterator<std::string*, std::string>(p));

    for (std::string* i = p; i != p + 5; ++i) {
        std::cout << *i << '\n';
        i->~basic_string<char>();
    }
    std::allocator<std::string>().deallocate(p, 5);
}
