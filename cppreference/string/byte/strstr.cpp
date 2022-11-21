// cppreference link https://en.cppreference.com/w/cpp/string/byte/strstr
#include <cstring>
#include <iostream>

int main()
{
    const char* str = "Try not. Do, or do not. There is no try.";
    const char* target = "not";
    const char* result = str;

    while ((result = std::strstr(result, target))) {
        std::cout << "Found '" << target
                  << "' starting at '" << result << "'\n";

        // Increment result, otherwise we'll find target at the same location
        ++result;
    }
}
