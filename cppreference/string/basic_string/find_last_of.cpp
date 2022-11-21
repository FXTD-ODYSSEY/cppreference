// cppreference link https://en.cppreference.com/w/cpp/string/basic_string/find_last_of
#include <iostream>
#include <string>

int main()
{
    const std::string path = "/root/config";
    auto const pos = path.find_last_of('/');
    const auto leaf = path.substr(pos + 1);

    std::cout << leaf << '\n';
}
