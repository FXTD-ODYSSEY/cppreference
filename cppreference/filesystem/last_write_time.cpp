// cppreference link https://en.cppreference.com/w/cpp/filesystem/last_write_time
#include <chrono>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <print>

using namespace std::chrono_literals;

int main()
{
    auto p = std::filesystem::temp_directory_path() / "example.bin";
    std::ofstream { p.c_str() }.put('a'); // create file

    std::filesystem::file_time_type ftime = std::filesystem::last_write_time(p);
    std::println("File write time is {}", ftime);

    // move file write time 1 hour to the future
    std::filesystem::last_write_time(p, ftime + 1h);

    // read back from the filesystem
    ftime = std::filesystem::last_write_time(p);
    std::println("File write time is {}", ftime);

    std::filesystem::remove(p);
}
