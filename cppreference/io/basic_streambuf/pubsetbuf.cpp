// cppreference link https://en.cppreference.com/w/cpp/io/basic_streambuf/pubsetbuf
#include <fstream>
#include <iostream>
#include <string>

int main()
{
    int cnt = 0;
    std::ifstream file;
    char buf[1024 * 10 + 1];

    file.rdbuf()->pubsetbuf(buf, sizeof buf);

    file.open("/usr/share/dict/words");

    for (std::string line; getline(file, line);)
        cnt++;

    std::cout << cnt << '\n';
}
