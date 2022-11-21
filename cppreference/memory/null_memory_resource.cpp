// cppreference link https://en.cppreference.com/w/cpp/memory/null_memory_resource
#include <array>
#include <cstddef>
#include <iostream>
#include <memory_resource>
#include <string>
#include <unordered_map>

int main()
{
    // allocate memory on the stack
    std::array<std::byte, 20000> buf;

    // without fallback memory allocation on heap
    std::pmr::monotonic_buffer_resource pool { buf.data(), buf.size(),
        std::pmr::null_memory_resource() };

    // allocate too much memory
    std::pmr::unordered_map<long, std::pmr::string> coll { &pool };
    try {
        for (std::size_t i = 0; i < buf.size(); ++i) {
            coll.emplace(i, "just a string with number " + std::to_string(i));

            if (i && i % 50 == 0)
                std::clog << "size: " << i << "...\n";
        }
    } catch (const std::bad_alloc& e) {
        std::cerr << e.what() << '\n';
    }

    std::cout << "size: " << coll.size() << '\n';
}
