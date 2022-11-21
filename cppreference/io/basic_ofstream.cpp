// cppreference link https://en.cppreference.com/w/cpp/io/basic_ofstream
#include <fstream>
#include <iostream>
#include <string>

int main()
{
    std::string filename = "Test.b";
    {
        std::ofstream ostrm(filename, std::ios::binary);
        double d = 3.14;
        ostrm.write(reinterpret_cast<char*>(&d), sizeof d); // binary output
        ostrm << 123 << "abc" << '\n'; // text output
    }
    // read back
    std::ifstream istrm(filename, std::ios::binary);
    double d;
    istrm.read(reinterpret_cast<char*>(&d), sizeof d);
    int n;
    std::string s;
    istrm >> n >> s;
    std::cout << " read back: " << d << " " << n << " " << s << '\n';
}
