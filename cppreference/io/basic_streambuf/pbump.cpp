// cppreference link https://en.cppreference.com/w/cpp/io/basic_streambuf/pbump
#include <fstream>
#include <iostream>
#include <string>

struct showput_streambuf : std::filebuf {
    using std::filebuf::pbump; // expose protected
    std::string showput() const
    {
        return std::string(pbase(), pptr());
    }
};

int main()
{
    showput_streambuf mybuf;
    mybuf.open("test.txt", std::ios_base::out);
    std::ostream str(&mybuf);
    str << "This is a test" << std::flush << "1234";
    std::cout << "The put area contains: " << mybuf.showput() << '\n';
    mybuf.pbump(10);
    std::cout << "after pbump(10), it contains " << mybuf.showput() << '\n';
}
