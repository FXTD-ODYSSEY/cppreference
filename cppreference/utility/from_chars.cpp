// cppreference link https://en.cppreference.com/w/cpp/utility/from_chars
#include <cassert>
#include <charconv>
#include <iomanip>
#include <iostream>
#include <optional>
#include <string_view>
#include <system_error>

int main()
{
    for (std::string_view const str : { "1234", "15 foo", "bar", " 42", "5000000000" }) {

        std::cout << "String: " << std::quoted(str) << ". ";

        int result {};

        auto [ptr, ec] { std::from_chars(str.data(), str.data() + str.size(), result) };

        if (ec == std::errc()) {
            std::cout << "Result: " << result << ", ptr -> " << std::quoted(ptr) << '\n';
        } else if (ec == std::errc::invalid_argument) {
            std::cout << "That isn't a number.\n";
        } else if (ec == std::errc::result_out_of_range) {
            std::cout << "This number is larger than an int.\n";
        }
    }

    // C++23's constexpr from_char demo:
    auto to_int = [](std::string_view s) -> std::optional<int> {
        if (int value; std::from_chars(s.begin(), s.end(), value).ec == std::errc {})
            return value;
        else
            return std::nullopt;
    };

    assert(to_int("42") == 42);
    assert(to_int("foo") == std::nullopt);
#if __cpp_lib_constexpr_charconv and __cpp_lib_optional >= 202106
    static_assert(to_int("42") == 42);
    static_assert(to_int("foo") == std::nullopt);
#endif
}
