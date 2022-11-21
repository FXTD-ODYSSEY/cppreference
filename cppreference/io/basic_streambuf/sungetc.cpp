// cppreference link https://en.cppreference.com/w/cpp/io/basic_streambuf/sungetc
#include <iostream>
#include <sstream>

int main()
{
    std::stringstream s("abcdef"); // gptr() points to 'a'
    char c1 = s.get(); // c = 'a', gptr() now points to 'b'
    char c2 = s.rdbuf()->sungetc(); // same as s.unget(): gptr() points to 'a' again
    char c3 = s.get(); // c3 = 'a', gptr() now points to 'b'
    char c4 = s.get(); // c4 = 'b', gptr() now points to 'c'
    std::cout << c1 << c2 << c3 << c4 << '\n';

    s.rdbuf()->sungetc(); // back to 'b'
    s.rdbuf()->sungetc(); // back to 'a'
    int eof = s.rdbuf()->sungetc(); // nothing to unget: pbackfail() fails
    if (eof == EOF)
        std::cout << "Nothing to unget after 'a'\n";
}
