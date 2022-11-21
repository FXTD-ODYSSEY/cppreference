// cppreference link https://en.cppreference.com/w/cpp/string/basic_string/reserve
#include <cassert>
#include <iostream>
#include <string>

int main()
{
    std::string s;
    const std::string::size_type new_capacity { 100u };
    std::cout << "Before: " << s.capacity() << "\n";

    s.reserve(new_capacity);
    std::cout << "After:  " << s.capacity() << "\n";
    assert(new_capacity <= s.capacity());

    // observing the capacity growth factor
    auto cap { s.capacity() };
    for (int check {}; check != 4; ++check) {
        while (cap == s.capacity())
            s += '$';
        cap = s.capacity();
        std::cout << "New capacity: " << cap << '\n';
    }

    // s.reserve(); //< deprecated in C++20, use:
    s.shrink_to_fit();
    std::cout << "After:  " << s.capacity() << "\n";
}
