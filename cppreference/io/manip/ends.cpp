// cppreference link https://en.cppreference.com/w/cpp/io/manip/ends
#include <cstdio>
#include <strstream>
int main()
{
    std::ostrstream oss;
    oss << "Sample text: " << 42 << std::ends;
    std::printf("%s\n", oss.str());
    oss.freeze(false); // enable memory deallocation
}
