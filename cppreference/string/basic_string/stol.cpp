// cppreference link https://en.cppreference.com/w/cpp/string/basic_string/stol
#include <iomanip>
#include <iostream>
#include <stdexcept>
#include <string>
#include <utility>

int main()
{
    const auto data = {
        "45",
        "+45",
        " -45",
        "3.14159",
        "31337 with words",
        "words and 2",
        "12345678901",
    };

    for (const std::string s : data) {
        std::size_t pos {};
        try {
            std::cout << "std::stoi('" << s << "'): ";
            const int i { std::stoi(s, &pos) };
            std::cout << i << "; pos: " << pos << '\n';
        } catch (std::invalid_argument const& ex) {
            std::cout << "std::invalid_argument::what(): " << ex.what() << '\n';
        } catch (std::out_of_range const& ex) {
            std::cout << "std::out_of_range::what(): " << ex.what() << '\n';
            const long long ll { std::stoll(s, &pos) };
            std::cout << "std::stoll('" << s << "'): " << ll << "; pos: " << pos << '\n';
        }
    }

    std::cout << "\nCalling with different radixes:\n";
    for (const auto& [s, base] : {
             std::pair<const char*, int> { "11", 2 },
             { "22", 3 },
             { "33", 4 },
             { "77", 8 },
             { "99", 10 },
             { "FF", 16 },
             { "jJ", 20 },
             { "Zz", 36 },
         }) {
        const int i { std::stoi(s, nullptr, base) };
        std::cout << "std::stoi('" << s << "', " << base << "): " << i << '\n';
    }
}
