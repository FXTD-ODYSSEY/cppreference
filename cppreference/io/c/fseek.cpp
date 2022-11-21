// cppreference link https://en.cppreference.com/w/cpp/io/c/fseek
#include <cassert>
#include <cstdint>
#include <cstdio>
#include <fstream>
#include <vector>

int main()
{
    std::ofstream("dummy.nfo") << "sample data\n";

    std::FILE* fp = std::fopen("dummy.nfo", "rb");
    assert(fp);

    std::fseek(fp, 0, SEEK_END); // seek to end
    std::size_t filesize = std::ftell(fp);

    std::fseek(fp, 0, SEEK_SET); // seek to start
    std::vector<uint8_t> buffer(filesize);
    std::fread(buffer.data(), sizeof(uint8_t), buffer.size(), fp);

    std::fclose(fp);
    std::printf("i've read%zi bytes\n", filesize);
}
