// cppreference link https://en.cppreference.com/w/cpp/regex/regex_search
#include <iostream>
#include <regex>
#include <string>

int main()
{
    std::string lines[] = { "Roses are #ff0000",
        "violets are #0000ff",
        "all of my base are belong to you" };

    std::regex color_regex("#([a-f0-9]{2})"
                           "([a-f0-9]{2})"
                           "([a-f0-9]{2})");

    // simple match
    for (const auto& line : lines) {
        std::cout << line << ": " << std::boolalpha
                  << std::regex_search(line, color_regex) << '\n';
    }
    std::cout << '\n';

    // show contents of marked subexpressions within each match
    std::smatch color_match;
    for (const auto& line : lines) {
        if (std::regex_search(line, color_match, color_regex)) {
            std::cout << "matches for '" << line << "'\n";
            std::cout << "Prefix: '" << color_match.prefix() << "'\n";
            for (size_t i = 0; i < color_match.size(); ++i)
                std::cout << i << ": " << color_match[i] << '\n';
            std::cout << "Suffix: '" << color_match.suffix() << "\'\n\n";
        }
    }

    // repeated search (see also std::regex_iterator)
    std::string log(R"(
        Speed:	366
        Mass:	35
        Speed:	378
        Mass:	32
        Speed:	400
	Mass:	30)");
    std::regex r(R"(Speed:\t\d*)");
    std::smatch sm;
    while (regex_search(log, sm, r)) {
        std::cout << sm.str() << '\n';
        log = sm.suffix();
    }

    // C-style string demo
    std::cmatch cm;
    if (std::regex_search("this is a test", cm, std::regex("test")))
        std::cout << "\nFound " << cm[0] << " at position " << cm.prefix().length();
}
