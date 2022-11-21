// cppreference link https://en.cppreference.com/w/cpp/algorithm/max
#include <algorithm>
#include <iostream>
#include <string_view>

int main()
{
    auto longest = [](const std::string_view s1, const std::string_view s2) {
        return s1.size() < s2.size();
    };

    std::cout << "Larger of 69 and 96 is " << std::max(69, 96) << "\n"
                                                                  "Larger of 'q', and 'p' is '"
              << std::max('q', 'p') << "'\n"
                                       "Largest of 010, 10, 0X10, and 0B10 is "
              << std::max({ 010, 10, 0X10, 0B10 }) << '\n'
              << R"(Longest of "long", "short", and "int" is )"
              << "\"" << std::max({ "long", "short", "int" }, longest) << "\"\n";
}
