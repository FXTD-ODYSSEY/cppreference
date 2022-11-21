// cppreference link https://en.cppreference.com/w/cpp/memory/set_default_resource
#include <array>
#include <cstddef>
#include <cstdint>
#include <iostream>
#include <iterator>
#include <memory_resource>
#include <vector>

class noisy_allocator : public std::pmr::memory_resource {
    void* do_allocate(std::size_t bytes, std::size_t alignment) override
    {
        std::cout << "+ Allocating " << bytes << " bytes @ ";
        void* p = std::pmr::new_delete_resource()->allocate(bytes, alignment);
        std::cout << p << '\n';
        return p;
    }

    void do_deallocate(void* p, std::size_t bytes, std::size_t alignment) override
    {
        std::cout << "- Deallocating " << bytes << " bytes @ " << p << '\n';
        return std::pmr::new_delete_resource()->deallocate(p, bytes, alignment);
    }

    bool do_is_equal(const std::pmr::memory_resource& other) const noexcept override
    {
        return std::pmr::new_delete_resource()->is_equal(other);
    }
};

int main()
{
    constexpr int push_back_limit { 16 };
    noisy_allocator mem;
    std::pmr::set_default_resource(&mem);

    {
        std::cout << "Entering scope #1 (without buffer on stack)...\n";
        std::cout << "Creating vector v...\n";
        std::pmr::vector<std::uint16_t> v { { 1, 2, 3, 4 } };
        std::cout << "v.data() @ " << v.data() << '\n';

        std::cout << "Requesting more...\n";
        for (int i { 0 }; i != push_back_limit; ++i) {
            v.push_back(i);
            std::cout << "v.size(): " << v.size() << '\n';
        }
        std::cout << "Exiting scope #1...\n";
    }

    std::cout << '\n';

    {
        std::cout << "Entering scope #2 (with buffer on stack)...\n";

        std::uint8_t buffer[16];
        std::cout << "Allocating buffer on stack: " << sizeof buffer << " bytes @ "
                  << static_cast<void*>(buffer) << '\n';
        std::pmr::monotonic_buffer_resource mem_res { std::data(buffer), std::size(buffer) };

        std::cout << "Creating vector v...\n";
        std::pmr::vector<std::uint16_t> v { { 1, 2, 3, 4 }, &mem_res };
        std::cout << "v.data() @ " << v.data() << '\n'; // equals to `buffer` address

        std::cout << "Requesting more...\n";
        for (int i { 0 }; i != push_back_limit; ++i) {
            v.push_back(i);
            std::cout << "v.size(): " << v.size() << '\n';
        }
        std::cout << "Exiting scope #2...\n";
    }
}
