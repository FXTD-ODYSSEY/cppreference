// cppreference link https://en.cppreference.com/w/cpp/memory/get_temporary_buffer
#include <algorithm>
#include <iostream>
#include <iterator>
#include <memory>
#include <string>

int main()
{
    const std::string s[] = { "string", "1", "test", "..." };
    const auto p = std::get_temporary_buffer<std::string>(4);
    // requires that p.first is passed to return_temporary_buffer
    // (beware of early exit points and exceptions)

    std::copy(s, s + p.second,
        std::raw_storage_iterator<std::string*, std::string>(p.first));
    // has same effect as: std::uninitialized_copy(s, s + p.second, p.first);
    // requires that each string in p is individually destroyed
    // (beware of early exit points and exceptions)

    std::copy(p.first, p.first + p.second,
        std::ostream_iterator<std::string> { std::cout, "\n" });

    std::for_each(p.first, p.first + p.second, [](std::string& e) {
        e.~basic_string<char>();
    }); // same as: std::destroy(p.first, p.first + p.second);

    std::return_temporary_buffer(p.first);
}
