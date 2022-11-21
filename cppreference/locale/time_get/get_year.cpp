// cppreference link https://en.cppreference.com/w/cpp/locale/time_get/get_year
#include <iostream>
#include <iterator>
#include <locale>
#include <sstream>

void try_get_year(const std::string& s)
{
    std::cout << "Parsing the year out of '" << s
              << "' in the locale " << std::locale().name() << '\n';
    std::istringstream str(s);
    std::ios_base::iostate err = std::ios_base::goodbit;

    std::tm t;
    std::time_get<char> const& facet = std::use_facet<std::time_get<char>>(str.getloc());
    std::istreambuf_iterator<char> ret = facet.get_year({ str }, {}, str, err, &t);
    str.setstate(err);
    std::istreambuf_iterator<char> last {};

    if (str) {
        std::cout << "Successfully parsed, year is " << 1900 + t.tm_year;

        if (ret != last) {
            std::cout << " Remaining content: ";
            std::copy(ret, last, std::ostreambuf_iterator<char>(std::cout));
        } else
            std::cout << " the input was fully consumed";
    } else {
        std::cout << "Parse failed. Unparsed string: ";
        std::copy(ret, last, std::ostreambuf_iterator<char>(std::cout));
    }

    std::cout << '\n';
}

int main()
{
    std::locale::global(std::locale("en_US.utf8"));
    try_get_year("13");
    try_get_year("2013");

    std::locale::global(std::locale("ja_JP.utf8"));
    try_get_year("2013年");
}
