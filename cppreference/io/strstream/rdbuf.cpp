// cppreference link https://en.cppreference.com/w/cpp/io/strstream/rdbuf
#include <strstream>
int main()
{
    const std::strstream buf;
    std::strstreambuf* ptr = buf.rdbuf();
}
