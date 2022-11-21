// cppreference link https://en.cppreference.com/w/cpp/io/basic_ostream/seekp
#include <iostream>
#include <sstream>

int main()
{
    std::ostringstream os("hello, world");
    os.seekp(7);
    os << 'W';
    os.seekp(0, std::ios_base::end);
    os << '!';
    os.seekp(0);
    os << 'H';
    std::cout << os.str() << '\n';
}
