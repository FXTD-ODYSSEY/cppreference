// cppreference link https://en.cppreference.com/w/cpp/io/basic_ifstream/swap
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>

bool create_stream(std::fstream& fs, const std::string& path)
{
    try {
        std::fstream fst { path, std::ios::trunc | std::ios::in | std::ios::out };
        if (fst.is_open()) {
            fst.swap(fs);
            return true;
        }
    } catch (...) {
        std::cout << "Exception!\n";
    }
    return false;
}

void use_stream(std::fstream& fs)
{
    fs.seekg(0);
    std::string data;
    fs >> data;
    std::cout << "data: " << std::quoted(data) << '\n';
}

int main()
{
    std::fstream fs;
    std::string path = "/tmp/test_file.txt";
    if (create_stream(fs, path)) {
        fs.write(path.c_str(), path.length());
        use_stream(fs);
    }
}
