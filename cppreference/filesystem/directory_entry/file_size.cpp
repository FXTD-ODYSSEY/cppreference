// cppreference link https://en.cppreference.com/w/cpp/filesystem/directory_entry/file_size
#include <cmath>
#include <cstdint>
#include <filesystem>
#include <iostream>

struct HumanReadable {
    std::uintmax_t size {};

    template <typename Os>
    friend Os& operator<<(Os& os, HumanReadable hr)
    {
        int i {};
        double mantissa = hr.size;
        for (; mantissa >= 1024.; ++i) {
            mantissa /= 1024.;
        }
        mantissa = std::ceil(mantissa * 10.) / 10.;
        os << mantissa << "BKMGTPE"[i];
        return i == 0 ? os : os << "B (" << hr.size << ')';
    }
};

int main(int argc, const char* argv[])
{
    const auto dir = argc == 2 ? std::filesystem::path { argv[1] }
                               : std::filesystem::current_path();

    for (std::filesystem::directory_entry const& entry :
        std::filesystem::directory_iterator(dir)) {
        if (entry.is_regular_file()) {
            std::cout << entry.path().filename() << " size: "
                      << HumanReadable { entry.file_size() } << '\n';
        }
    }
}
