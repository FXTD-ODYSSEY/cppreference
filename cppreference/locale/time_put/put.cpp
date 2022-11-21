// cppreference link https://en.cppreference.com/w/cpp/locale/time_put/put
#include <ctime>
#include <iomanip>
#include <iostream>
#include <sstream>

void try_time_put(const std::tm* t, const std::string& fmt)
{
    std::cout.imbue(std::locale());
    std::cout << "In the locale '" << std::cout.getloc().name() << "': '";

    std::use_facet<std::time_put<char>>(std::cout.getloc()).put({ std::cout }, std::cout, ' ', t, &fmt[0], &fmt[0] + fmt.size());

    std::cout << "'\n";
}

int main()
{
    std::time_t t = std::time(NULL);
    std::tm tm = *std::localtime(&t);

    std::string fmt = "%c";
    std::cout << "Using the format string '" << fmt
              << "' to format the time: " << std::ctime(&t) << '\n';

    std::locale::global(std::locale("de_DE.utf8"));
    try_time_put(&tm, fmt);

    std::locale::global(std::locale("el_GR.utf8"));
    try_time_put(&tm, fmt);

    std::locale::global(std::locale("ja_JP.utf8"));
    try_time_put(&tm, fmt);
}
