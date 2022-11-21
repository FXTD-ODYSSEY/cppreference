// cppreference link https://en.cppreference.com/w/cpp/io/c/fwrite
#include <array>
#include <cstdio>
#include <vector>

int main()
{
    // write buffer to file
    if (std::FILE* f1 = std::fopen("file.bin", "wb")) {
        std::array<int, 3> v = { 42, -1, 7 }; // underlying storage of std::array is an array
        std::fwrite(v.data(), sizeof v[0], v.size(), f1);
        std::fclose(f1);
    }

    // read the same data and print it to the standard output
    if (std::FILE* f2 = std::fopen("file.bin", "rb")) {
        std::vector<int> rbuf(10); // underlying storage of std::vector is also an array
        std::size_t sz = std::fread(rbuf.data(), sizeof rbuf[0], rbuf.size(), f2);
        std::fclose(f2);
        for (std::size_t n = 0; n < sz; ++n) {
            std::printf("%d\n", rbuf[n]);
        }
    }
}
