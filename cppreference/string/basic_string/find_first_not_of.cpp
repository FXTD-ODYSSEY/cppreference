// cppreference link https://en.cppreference.com/w/cpp/string/basic_string/find_first_not_of
#include <iostream>
#include <string>

int main()
{
    std::string to_search = "Some data with%MACROS to substitute";

    std::cout << "Before: " << to_search << '\n';

    auto pos = std::string::npos;
    while ((pos = to_search.find('%')) != std::string::npos) {
        // Permit uppercase letters, lowercase letters and numbers in macro names
        const auto after = to_search.find_first_not_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                                                       "abcdefghijklmnopqrstuvwxyz"
                                                       "0123456789",
            pos + 1);

        // Now to_search[pos] == '%' and to_search[after] == ' ' (after the 'S')

        if (after != std::string::npos)
            to_search.replace(pos, after - pos, "some very nice macros");
    }

    std::cout << "After: " << to_search << '\n';
}
