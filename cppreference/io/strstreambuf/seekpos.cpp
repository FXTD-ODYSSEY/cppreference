// cppreference link https://en.cppreference.com/w/cpp/io/strstreambuf/seekpos
#include <cstring>
#include <iostream>
#include <strstream>

struct mybuf : std::strstreambuf {
    mybuf(const char* str)
        : std::strstreambuf(str, std::strlen(str))
    {
    }

    pos_type seekpos(pos_type sp, std::ios_base::openmode which)
    {
        std::cout << "Before seekpos(" << sp << "), size of the get area is "
                  << egptr() - eback() << " with "
                  << egptr() - gptr() << " read positions available.\n";

        pos_type rc = std::strstreambuf::seekpos(sp, which);

        std::cout << "seekpos() returns " << rc << ".\nAfter the call, "
                  << "size of the get area is "
                  << egptr() - eback() << " with "
                  << egptr() - gptr() << " read positions available.\n";

        return rc;
    }
};

int main()
{
    mybuf buf("12345");
    std::iostream stream(&buf);
    stream.seekg(2);
}
