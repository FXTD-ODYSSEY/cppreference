// cppreference link https://en.cppreference.com/w/cpp/filesystem/path/operator%3D
#include <filesystem>
namespace fs = std::filesystem;
int main()
{
    fs::path p = "C:/users/abcdef/AppData/Local";
    p = p / "Temp"; // move assignment
    const wchar_t* wstr = L"D:/猫.txt";
    p = wstr; // assignment from a source
}
