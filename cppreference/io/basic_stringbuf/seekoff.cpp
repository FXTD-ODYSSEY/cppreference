// cppreference link https://en.cppreference.com/w/cpp/io/basic_stringbuf/seekoff
#include <iostream>
#include <sstream>

int main()
{
    std::stringstream ss("123"); // in/out
    std::cout << "put pos = " << ss.tellp()
              << " get pos = " << ss.tellg() << '\n';

    // absolute positioning both pointers
    ss.rdbuf()->pubseekoff(1, std::ios_base::beg); // move both 1 forward
    std::cout << "put pos = " << ss.tellp()
              << " get pos = " << ss.tellg() << '\n';

    // try to move both pointers 1 forward from current position
    if (-1 == ss.rdbuf()->pubseekoff(1, std::ios_base::cur))
        std::cout << "moving both pointers from current position failed\n";
    std::cout << "put pos = " << ss.tellp()
              << " get pos = " << ss.tellg() << '\n';

    // move the write pointer 1 forward, but not the read pointer
    // can also be called as ss.seekp(1, std::ios_base::cur);
    ss.rdbuf()->pubseekoff(1, std::ios_base::cur, std::ios_base::out);
    std::cout << "put pos = " << ss.tellp()
              << " get pos = " << ss.tellg() << '\n';

    ss << 'a'; // write at put position
    std::cout << "Wrote 'a' at put position, the buffer is now " << ss.str() << '\n';

    char ch;
    ss >> ch;
    std::cout << "reading at get position gives '" << ch << "'\n";
}
