// cppreference link https://en.cppreference.com/w/cpp/io/strstreambuf/overflow
#include <iostream>
#include <strstream>

struct mybuf : std::strstreambuf {
    int_type overflow(int_type c)
    {
        std::cout << "Before overflow(): size of the put area is " << epptr() - pbase()
                  << " with " << epptr() - pptr() << " write positions available\n";
        int_type rc = std::strstreambuf::overflow(c);
        std::cout << "After overflow(): size of the put area is " << epptr() - pbase()
                  << " with " << epptr() - pptr() << " write positions available\n";
        return rc;
    }
};

int main()
{
    mybuf sbuf; // read-write dynamic strstreambuf
    std::iostream stream(&sbuf);

    stream << "Sufficiently long string to overflow the initial allocation, at least "
           << " on some systems.";
}
