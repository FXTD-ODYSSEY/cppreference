// cppreference link https://en.cppreference.com/w/cpp/io/basic_istream/sync
#include <fstream>
#include <iostream>

void file_abc()
{
    std::ofstream f("test.txt");
    f << "abc\n";
}

void file_123()
{
    std::ofstream f("test.txt");
    f << "123\n";
}

int main()
{
    file_abc(); // file now contains "abc"
    std::ifstream f("test.txt");
    std::cout << "Reading from the file\n";
    char c;
    f >> c;
    std::cout << c;
    file_123(); // file now contains "123"
    f >> c;
    std::cout << c;
    f >> c;
    std::cout << c << '\n';
    f.close();

    file_abc(); // file now contains "abc"
    f.open("test.txt");
    std::cout << "Reading from the file, with sync()\n";
    f >> c;
    std::cout << c;
    file_123(); // file now contains "123"
    f.sync();
    f >> c;
    std::cout << c;
    f >> c;
    std::cout << c << '\n';
}
