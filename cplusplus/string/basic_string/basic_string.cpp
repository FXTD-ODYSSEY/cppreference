// cplusplus link https://cplusplus.com/reference/string\basic_string\basic_string
// string constructor
#include <iostream>
#include <string>

int main()
{
    std::string s0("Initial string");

    // constructors used in the same order as described above:
    std::string s1;
    std::string s2(s0);
    std::string s3(s0, 8, 3);
    std::string s4("A character sequence", 6);
    std::string s5("Another character sequence");
    std::string s6(10, 'x');
    std::string s7a(10, 42);
    std::string s7b(s0.begin(), s0.begin() + 7);

    std::cout << "s1: " << s1 << "\ns2: " << s2 << "\ns3: " << s3;
    std::cout << "\ns4: " << s4 << "\ns5: " << s5 << "\ns6: " << s6;
    std::cout << "\ns7a: " << s7a << "\ns7b: " << s7b << '\n';
    return 0;
}
