// cppreference link https://en.cppreference.com/w/cpp/io/basic_fstream
#include <fstream>
#include <iostream>
#include <string>

int main()
{
    std::string filename = "test.bin";
    std::fstream s(filename, s.binary | s.trunc | s.in | s.out);
    if (!s.is_open()) {
        std::cout << "failed to open " << filename << '\n';
    } else {
        // write
        double d = 3.14;
        s.write(reinterpret_cast<char*>(&d), sizeof d); // binary output
        s << 123 << "abc"; // text output

        // for fstream, this moves the file position pointer (both put and get)
        s.seekp(0);

        // read
        s.read(reinterpret_cast<char*>(&d), sizeof d); // binary input
        int n;
        std::string str;
        if (s >> n >> str) // text input
            std::cout << "read back from file: " << d << ' ' << n << ' ' << str << '\n';
    }
}
