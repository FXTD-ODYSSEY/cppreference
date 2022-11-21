// cppreference link https://en.cppreference.com/w/cpp/chrono/hh_mm_ss/formatter
#include <chrono>
#include <format>
#include <iostream>

using namespace std::literals;
int main()
{
    std::chrono::hh_mm_ss c { 16h + 32min + 10s };

    std::cout << "%R: " << std::format("{:%R}", c) << '\n'
              << "%T: " << std::format("{:%T}", c) << '\n';
}
