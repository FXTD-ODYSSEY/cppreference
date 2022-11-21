// cppreference link https://en.cppreference.com/w/cpp/io/basic_ostream/%7Ebasic_ostream
#include <iostream>
#include <sstream>
void add_words(std::streambuf* p)
{
    std::ostream buf(p); // buf shares the buffer with s
    buf << " is the answer";
} // calls the destructor of buf. p remains unaffected
int main()
{
    std::ostringstream s;
    s << 42;
    add_words(s.rdbuf());
    s << ".";
    std::cout << s.str() << '\n';
}
