// cppreference link https://en.cppreference.com/w/cpp/io/c/remove
#include <cstdio>
#include <fstream>
#include <iostream>
int main()
{
    bool ok = static_cast<bool>(std::ofstream("file1.txt").put('a')); // create file
    if (!ok) {
        std::perror("Error creating file1.txt");
        return 1;
    }
    std::cout << std::ifstream("file1.txt").rdbuf() << '\n'; // print file

    std::remove("file1.txt"); // delete file

    bool failed = !std::ifstream("file1.txt");
    if (failed) {
        std::perror("Error opening deleted file");
        return 1;
    }
}
