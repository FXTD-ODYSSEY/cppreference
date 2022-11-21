// cppreference link https://en.cppreference.com/w/cpp/io/basic_istream/operator_gtgt2
#include <iomanip>
#include <iostream>
#include <sstream>

int main()
{
    std::string input = "n greetings";
    std::istringstream stream(input);

    char c;
    const int MAX = 6;
    char cstr[MAX];

    stream >> c >> std::setw(MAX) >> cstr;
    std::cout << "c = " << c << '\n'
              << "cstr = " << cstr << '\n';

    double f;
    std::istringstream("1.23") >> f; // rvalue stream extraction
    std::cout << "f = " << f << '\n';
}
