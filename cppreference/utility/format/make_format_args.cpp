// cppreference link https://en.cppreference.com/w/cpp/utility/format/make_format_args
#include <array>
#include <format>
#include <iostream>
#include <string_view>

void raw_write_to_log(std::string_view users_fmt, std::format_args&& args)
{
    static int n {};
    std::clog << std::format("{:04}: ", n++) << std::vformat(users_fmt, args) << '\n';
}

template <typename... Args>
constexpr void log(Args&&... args)
{

    // Generate formatting string "{} "...
    std::array<char, sizeof...(Args) * 3 + 1> braces {};
    constexpr const char c[4] = "{} ";
    for (auto i { 0u }; i != braces.size() - 1; ++i) {
        braces[i] = c[i % 3];
    }
    braces.back() = '\0';

    raw_write_to_log(std::string_view { braces.data() }, std::make_format_args(args...));
}

int main()
{
    log("Number", "of", "arguments", "is", "arbitrary.");
    log("Any type that meets the `BasicFormatter` requirements", "can be printed.");
    log("For example:", 1, 2.0, '3', "*42*");

    raw_write_to_log("{:02} │ {} │ {} │ {}", std::make_format_args(1, 2.0, '3', "4"));
}
