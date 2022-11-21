// cppreference link https://en.cppreference.com/w/cpp/io/istrstream/rdbuf
#include <strstream>
int main()
{
    const std::istrstream buf("example");
    std::strstreambuf* ptr = buf.rdbuf();
}
