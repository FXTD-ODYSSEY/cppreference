// cppreference link https://en.cppreference.com/w/cpp/io/manip/resetiosflags
#include <iomanip>
#include <iostream>
#include <sstream>

int main()
{
    std::istringstream in("10 010 10 010 10 010");
    int n1, n2;

    in >> std::oct >> n1 >> n2;
    std::cout << "Parsing \"10 010\" with std::oct gives: " << n1 << ' ' << n2 << '\n';

    in >> std::dec >> n1 >> n2;
    std::cout << "Parsing \"10 010\" with std::dec gives: " << n1 << ' ' << n2 << '\n';

    in >> std::resetiosflags(std::ios_base::basefield) >> n1 >> n2;
    std::cout << "Parsing \"10 010\" with autodetect gives: " << n1 << ' ' << n2 << '\n';
}
