// cppreference link https://en.cppreference.com/w/cpp/filesystem/path/operator_slash
#include <filesystem>
#include <iostream>

int main()
{

#if defined(_WIN32) // see e.g. stackoverflow.com/questions/142508

    std::filesystem::path p = "C:";

    std::cout << "\"C:\" / \"Users\" / \"batman\" == " << p / "Users" / "batman" << '\n';

#else // __linux__ etc

    std::filesystem::path p = "/home";

    std::cout << "\"/home\" / \"tux\" / \".fonts\" == " << p / "tux" / ".fonts" << '\n';

#endif
}
