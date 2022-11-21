// cppreference link https://en.cppreference.com/w/cpp/locale/num_get
#include <iostream>
#include <iterator>
#include <locale>
#include <sstream>
#include <string>

int main()
{
    std::string de_double = "1.234.567,89";
    std::string us_double = "1,234,567.89";

    // parse using streams
    std::istringstream de_in(de_double);
    de_in.imbue(std::locale("de_DE"));
    double f1;
    de_in >> f1;

    std::istringstream us_in(de_double);
    us_in.imbue(std::locale("en_US.UTF-8"));
    double f2;
    us_in >> f2;

    std::cout << "Parsing " << de_double << " as double gives " << std::fixed
              << f1 << " in de_DE locale and " << f2 << " in en_US\n";

    // use the facet directly
    std::istringstream s3(us_double);
    s3.imbue(std::locale("en_US.UTF-8"));
    auto& f = std::use_facet<std::num_get<char>>(s3.getloc());
    std::istreambuf_iterator<char> beg(s3), end;
    double f3;
    std::ios::iostate err;
    f.get(beg, end, s3, err, f3);
    std::cout << "parsing " << us_double
              << " as double using raw en_US facet gives " << f3 << '\n';
}
