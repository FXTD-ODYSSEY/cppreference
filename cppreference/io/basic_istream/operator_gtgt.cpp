// cppreference link https://en.cppreference.com/w/cpp/io/basic_istream/operator_gtgt
#include <iomanip>
#include <iostream>
#include <sstream>

int main()
{
    std::string input = "41 3.14 false hello world";
    std::istringstream stream(input);

    int n;
    double f;
    bool b;

    stream >> n >> f >> std::boolalpha >> b;
    std::cout << "n = " << n << '\n'
              << "f = " << f << '\n'
              << "b = " << std::boolalpha << b << '\n';

    // extract the rest using the streambuf overload
    stream >> std::cout.rdbuf();
    std::cout << '\n';
}
