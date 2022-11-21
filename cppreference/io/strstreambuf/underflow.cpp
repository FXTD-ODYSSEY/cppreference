// cppreference link https://en.cppreference.com/w/cpp/io/strstreambuf/underflow
#include <iostream>
#include <strstream>

struct mybuf : std::strstreambuf {
    int_type overflow(int_type c)
    {
        std::cout << "Before overflow(): size of the get area is " << egptr() - eback()
                  << " size of the put area is " << epptr() - pbase() << '\n';
        int_type rc = std::strstreambuf::overflow(c);
        std::cout << "After overflow(): size of the get area is " << egptr() - eback()
                  << " size of the put area is " << epptr() - pbase() << '\n';
        return rc;
    }

    int_type underflow()
    {
        std::cout << "Before underflow(): size of the get area is " << egptr() - eback()
                  << " size of the put area is " << epptr() - pbase() << '\n';
        int_type ch = std::strstreambuf::underflow();
        std::cout << "After underflow(): size of the get area is " << egptr() - eback()
                  << " size of the put area is " << epptr() - pbase() << '\n';
        if (ch == EOF) {
            std::cout << "underflow() returns EOF\n";
        } else {
            std::cout << "underflow() returns '" << char(ch) << "'\n";
        }
        return ch;
    }
};

int main()
{
    mybuf sbuf; // read-write dynamic strstreambuf
    std::iostream stream(&sbuf);

    int n;
    stream >> n;
    stream.clear();
    stream << "123";
    stream >> n;
    std::cout << n << '\n';
}
