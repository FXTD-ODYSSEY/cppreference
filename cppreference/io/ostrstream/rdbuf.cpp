// cppreference link https://en.cppreference.com/w/cpp/io/ostrstream/rdbuf
#include <strstream>
int main()
{
    const std::ostrstream buf;
    std::strstreambuf* ptr = buf.rdbuf();
}
