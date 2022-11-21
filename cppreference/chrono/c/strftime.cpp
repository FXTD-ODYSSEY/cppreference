// cppreference link https://en.cppreference.com/w/cpp/chrono/c/strftime
#include <ctime>
#include <iostream>
#include <iterator>
#include <locale>

void utcExample()
{
    // Example of the very popular RFC 3339 format UTC time
    std::time_t time = std::time({});
    char timeString[std::size("yyyy-mm-ddThh:mm:ssZ")];
    std::strftime(std::data(timeString), std::size(timeString), "%FT%TZ", std::gmtime(&time));
    std::cout << timeString << '\n';
}

int main()
{
    std::time_t t = std::time(nullptr);
    char mbstr[100];

    if (std::strftime(mbstr, sizeof(mbstr), "%A%c", std::localtime(&t))) {
        std::cout << mbstr << '\n';
    }
    std::locale::global(std::locale("ja_JP.utf8"));
    if (std::strftime(mbstr, sizeof(mbstr), "%A%c", std::localtime(&t))) {
        std::cout << mbstr << '\n';
    }

    utcExample();
}
