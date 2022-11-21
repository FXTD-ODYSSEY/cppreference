// cppreference link https://en.cppreference.com/w/cpp/io/basic_stringbuf/underflow
#include <iostream>
#include <sstream>

struct mybuf : std::stringbuf {
    mybuf(const std::string& new_str,
        std::ios_base::openmode which = std::ios_base::in | std::ios_base::out)
        : std::stringbuf(new_str, which)
    {
    }

    int_type overflow(int_type c)
    {
        std::cout << "Before overflow(): get area size is " << egptr() - eback() << ' '
                  << " the put area size is " << epptr() - pbase() << '\n';
        int_type rc = std::stringbuf::overflow(c);
        std::cout << "After overflow(): get area size is " << egptr() - eback() << ' '
                  << " put area size is " << epptr() - pbase() << '\n';
        return rc;
    }

    int_type underflow()
    {
        std::cout << "Before underflow(): get area size is " << egptr() - eback() << ' '
                  << " put area size is " << epptr() - pbase() << '\n';
        int_type ch = std::stringbuf::underflow();
        std::cout << "After underflow(): get area size is " << egptr() - eback() << ' '
                  << " put area size is " << epptr() - pbase() << '\n';
        if (ch == EOF)
            std::cout << "underflow() returns EOF\n";
        else
            std::cout << "underflow() returns '" << char(ch) << "'\n";
        return ch;
    }
};

int main()
{
    mybuf sbuf("123"); // read-write stream
    std::iostream stream(&sbuf);
    int n;
    stream >> n; // calls sgetc() four times
                 // three calls return the characters '1', '2', '3'
                 // the fourth call, gptr() == egptr() and underflow() is called
                 // underflow returns EOF
    std::cout << n << '\n';
    stream.clear(); // clear the eofbit

    stream << "123456"; // sputc() is called 6 times
                        // first three calls store "123" in the existing buffer
                        // 4th call finds that pptr() == epptr() and calls overflow()
                        // overflow() grows the buffer and sets egptr() to 4
                        // 5th and 6th calls store '5' and '6', advancing pptr()
    stream >> n; // calls sgetc() 4 times
                 // 1st call returns the '4' that was made available by overflow()
                 // on the 2nd call, egptr() == egptr() and underflow() is called
                 // underflow advances egptr() to equal pptr() (which is 6)
                 // 3rd sgetc() returns '6'
                 // 4th sgetc() finds gptr() == egptr(), calls underflow()
                 // underflow() returns EOF
    std::cout << n << '\n';
}
