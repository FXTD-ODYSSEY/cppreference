// cppreference link https://en.cppreference.com/w/cpp/chrono/duration/from_stream
#include <chrono>
#include <iostream>
#include <locale>
#include <sstream>

int main()
{
    std::istringstream is { "16:14:34" };
    is.imbue(std::locale("en_US.utf-8"));
    std::chrono::hours hh;
    is >> std::chrono::from_stream("%H:%M:%S", hh);
    is.fail()
        ? std::cout << "Parse failed!\n"
        : std::cout << hh.count() << '\n';
}
