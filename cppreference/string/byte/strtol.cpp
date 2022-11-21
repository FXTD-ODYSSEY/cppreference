// cppreference link https://en.cppreference.com/w/cpp/string/byte/strtol
#include <cerrno>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>

int main()
{
    const char* p = "10 200000000000000000000000000000 30 -40";
    std::cout << "Parsing " << std::quoted(p) << ":\n";

    for (;;) {
        // errno can be set to any non-zero value by a library function call
        // regardless of whether there was an error, so it needs to be cleared
        // in order to check the error set by strtol
        errno = 0;
        char* p_end;
        const long i = std::strtol(p, &p_end, 10);
        if (p == p_end)
            break;

        const bool range_error = errno == ERANGE;
        const std::string extracted(p, p_end - p);
        p = p_end;

        std::cout << "Extracted " << std::quoted(extracted)
                  << ", strtol returned " << i << '.';
        if (range_error)
            std::cout << " Range error occurred.";

        std::cout << '\n';
    }
}
