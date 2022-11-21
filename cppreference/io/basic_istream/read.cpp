// cppreference link https://en.cppreference.com/w/cpp/io/basic_istream/read
#include <cstdint>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

int main()
{
    // read() is often used for binary I/O
    std::string bin = { '\x12', '\x12', '\x12', '\x12' };
    std::istringstream raw(bin);
    std::uint32_t n;
    if (raw.read(reinterpret_cast<char*>(&n), sizeof n))
        std::cout << std::hex << std::showbase << n << '\n';

    // prepare file for next snippet
    std::ofstream("test.txt", std::ios::binary) << "abcd1\nabcd2\nabcd3";

    // read entire file into string
    if (std::ifstream is { "test.txt", std::ios::binary | std::ios::ate }) {
        auto size = is.tellg();
        std::string str(size, '\0'); // construct string to stream size
        is.seekg(0);
        if (is.read(&str[0], size))
            std::cout << str << '\n';
    }
}
