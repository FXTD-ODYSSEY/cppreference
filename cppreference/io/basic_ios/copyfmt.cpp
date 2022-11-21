// cppreference link https://en.cppreference.com/w/cpp/io/basic_ios/copyfmt
#include <bitset>
#include <climits>
#include <fstream>
#include <iostream>

int main()
{
    std::ofstream out;

    out.copyfmt(std::cout); // copy everything except rdstate and rdbuf
    out.clear(std::cout.rdstate()); // copy rdstate
    out.basic_ios<char>::rdbuf(std::cout.rdbuf()); // share the buffer

    out << "Hello, world\n";

    auto bin = [](std::ios_base::fmtflags f) {
        return std::bitset<sizeof(std::ios_base::fmtflags) * CHAR_BIT> { static_cast<unsigned long long>(f) };
    };
    std::ofstream out2;
    std::cout << "1) out2.flags(): " << bin(out2.flags()) << '\n';
    std::cout << "2) cout.flags(): " << bin(std::cout.flags()) << '\n';
    std::cout.setf(std::ios::hex | std::ios::fixed | std::ios::boolalpha);
    std::cout << "3) cout.flags(): " << bin(std::cout.flags()) << '\n';
    out2.copyfmt(std::cout); // copy everything except rdstate and rdbuf
    std::cout << "4) out2.flags(): " << bin(out2.flags()) << '\n';
}
