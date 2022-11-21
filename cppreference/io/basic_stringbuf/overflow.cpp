// cppreference link https://en.cppreference.com/w/cpp/io/basic_stringbuf/overflow
#include <iostream>
#include <sstream>

struct mybuf : std::stringbuf {
    mybuf(const std::string& new_str,
        std::ios_base::openmode which = std::ios_base::in | std::ios_base::out)
        : std::stringbuf(new_str, which)
    {
    }

    int_type overflow(int_type c = EOF) override
    {
        std::cout << "stringbuf::overflow('" << char(c) << "') called\n"
                  << "Before: size of get area: " << egptr() - eback() << '\n'
                  << "        size of put area: " << epptr() - pbase() << '\n';

        int_type ret = std::stringbuf::overflow(c);

        std::cout << "After: size of get area: " << egptr() - eback() << '\n'
                  << "        size of put area: " << epptr() - pbase() << '\n';

        return ret;
    }
};

int main()
{
    std::cout << "read-write stream:\n";
    mybuf sbuf("   "); // read-write stream
    std::iostream stream(&sbuf);
    stream << 1234;
    std::cout << sbuf.str() << '\n';

    std::cout << "\nread-only stream:\n";
    mybuf ro_buf("   ", std::ios_base::in); // read-only stream
    std::iostream ro_stream(&ro_buf);
    ro_stream << 1234;

    std::cout << "\nwrite-only stream:\n";
    mybuf wr_buf("   ", std::ios_base::out); // write-only stream
    std::iostream wr_stream(&wr_buf);
    wr_stream << 1234;
}
