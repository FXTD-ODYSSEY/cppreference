// cppreference link https://en.cppreference.com/w/cpp/regex/error_type
#include <iomanip>
#include <iostream>
#include <regex>
#include <sstream>
#include <string>
using namespace std::string_literals;

void show_regex_error(const std::regex_error& e)
{
    std::string err_message = e.what();

#define CASE(type, msg)                               \
    case std::regex_constants::type:                  \
        err_message += " ("s + #type "):\n  "s + msg; \
        break
    switch (e.code()) {
        CASE(error_collate, "The expression contains an invalid collating element name");
        CASE(error_ctype, "The expression contains an invalid character class name");
        CASE(error_escape, "The expression contains an invalid escaped character or a trailing escape");
        CASE(error_backref, "The expression contains an invalid back reference");
        CASE(error_brack, "The expression contains mismatched square brackets ('[' and ']')");
        CASE(error_paren, "The expression contains mismatched parentheses ('(' and ')')");
        CASE(error_brace, "The expression contains mismatched curly braces ('{' and '}')");
        CASE(error_badbrace, "The expression contains an invalid range in a {} expression");
        CASE(error_range, "The expression contains an invalid character range (e.g. [b-a])");
        CASE(error_space, "There was not enough memory to convert the expression into a finite state machine");
        CASE(error_badrepeat, "one of *?+{ was not preceded by a valid regular expression");
        CASE(error_complexity, "The complexity of an attempted match exceeded a predefined level");
        CASE(error_stack, "There was not enough memory to perform a match");
    }
#undef CASE

    /* std::cerr */ std::cout << err_message << ". \n\n";
}

void regular_expression_checker(const std::string& text,
    const std::string& regex,
    const std::regex::flag_type flags)
{
    std::cout << "Text: " << quoted(text) << "\nRegex: " << quoted(regex) << '\n';
    try {
        const std::regex re { regex, flags };
        const bool matched = std::regex_match(text, re);

        std::stringstream out;
        out << (matched ? "MATCH!\n" : "DOES NOT MATCH!\n");

        std::smatch m;
        if (std::regex_search(text, m, re); !m.empty()) {
            out << "prefix = [" << m.prefix().str().data() << "]\n";

            for (std::size_t i {}; i != m.size(); ++i)
                out << "  m[" << i << "] = [" << m[i].str().data() << "]\n";

            out << "suffix = [" << m.suffix().str().data() << "]\n";
        }
        std::cout << out.str() << '\n';
    } catch (std::regex_error& ex) {
        show_regex_error(ex);
    }
}

int main()
{

    constexpr std::regex::flag_type your_flags
        = std::regex::flag_type { 0 }
        // Choose one of the supported grammars:
        | std::regex::ECMAScript
        //  | std::regex::basic
        //  | std::regex::extended
        //  | std::regex::awk
        //  | std::regex::grep
        //  | std::regex::egrep
        // Choose any of the next options:
        //  | std::regex::icase
        //  | std::regex::nosubs
        //  | std::regex::optimize
        //  | std::regex::collate
        //  | std::regex::multiline
        ;

    const auto your_text = "Hello regular expressions."s;
    const auto your_regex = R"(([a-zA-Z]+) ([a-z]+) ([a-z]+)\.)"s;
    regular_expression_checker(your_text, your_regex, your_flags);

    regular_expression_checker("Invalid!", R"(((.)(.))", your_flags);
    regular_expression_checker("Invalid!", R"([.)", your_flags);
    regular_expression_checker("Invalid!", R"([.]{})", your_flags);
    regular_expression_checker("Invalid!", R"([1-0])", your_flags);
}
