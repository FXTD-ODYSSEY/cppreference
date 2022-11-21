// cppreference link https://en.cppreference.com/w/cpp/filesystem/path/generic_string
#include <cstddef>
#include <filesystem>
#include <iomanip>
#include <iostream>
#include <span>
#include <string_view>

void print(std::string_view rem, auto const& str)
{
    std::cout << rem << std::hex << std::uppercase << std::setfill('0');
    for (const auto b : std::as_bytes(std::span { str })) {
        std::cout << std::setw(2) << std::to_integer<unsigned>(b) << ' ';
    }
    std::cout << '\n';
}

int main()
{
    std::filesystem::path p { "/家/屋" };
    std::cout << p << '\n';

    print("string   : ", p.generic_string());
    print("u8string : ", p.generic_u8string());
    print("u16string: ", p.generic_u16string());
    print("u32string: ", p.generic_u32string());
    //  print("wstring  : ", p.generic_wstring  ());
    //  gcc-11.0.0 2020.12.30 still fails, clang-10 - ok
}
