// cppreference link https://en.cppreference.com/w/cpp/filesystem/space
#include <cstdint>
#include <filesystem>
#include <iostream>

void print_space_info(auto const& dirs, int width = 15)
{
    (std::cout << std::left).imbue(std::locale("en_US.UTF-8"));
    for (const auto s : { "Capacity", "Free", "Available", "Dir" })
        std::cout << "│ " << std::setw(width) << s << ' ';
    std::cout << '\n';
    std::error_code ec;
    for (auto const& dir : dirs) {
        const std::filesystem::space_info si = std::filesystem::space(dir, ec);
        std::cout
            << "│ " << std::setw(width) << static_cast<std::intmax_t>(si.capacity) << ' '
            << "│ " << std::setw(width) << static_cast<std::intmax_t>(si.free) << ' '
            << "│ " << std::setw(width) << static_cast<std::intmax_t>(si.available) << ' '
            << "│ " << dir << '\n';
    }
}

int main()
{
    const auto dirs = { "/dev/null", "/tmp", "/home", "/null" };
    print_space_info(dirs);
}
