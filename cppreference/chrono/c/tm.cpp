// cppreference link https://en.cppreference.com/w/cpp/chrono/c/tm
#include <ctime>
#include <iostream>

int main()
{
    std::tm tm {};
    tm.tm_year = 2022 - 1900;
    tm.tm_mday = 1;

    std::mktime(&tm);
    std::cout << std::asctime(&tm)
              << "sizeof(std::tm) = "
              << sizeof(std::tm) << '\n';
}
