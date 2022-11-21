// cppreference link https://en.cppreference.com/w/cpp/chrono/c/asctime
#include <ctime>
#include <iomanip>
#include <iostream>

int main()
{
    const std::time_t now = std::time(nullptr);

    for (const char* localeName : { "C", "en_US.utf8", "de_DE.utf8", "ja_JP.utf8" }) {
        std::cout << "locale " << localeName << ":"
                                                "\n"
                  << std::left;
        std::locale::global(std::locale(localeName));

        std::cout << std::setw(40) << "    asctime" << std::asctime(std::localtime(&now));

        // strftime output for comparison:
        char buf[64];
        if (strftime(buf, sizeof buf, "%c\n", std::localtime(&now))) {
            std::cout << std::setw(40) << "    strftime%c" << buf;
        }

        if (strftime(buf, sizeof buf, "%a%b%e%H:%M:%S%Y\n", std::localtime(&now))) {
            std::cout << std::setw(40) << "    strftime%a%b%e%H:%M:%S%Y" << buf;
        }

        std::cout << '\n';
    }
}
