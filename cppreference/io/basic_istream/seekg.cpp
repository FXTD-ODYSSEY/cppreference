// cppreference link https://en.cppreference.com/w/cpp/io/basic_istream/seekg
#include <iostream>
#include <sstream>
#include <string>

int main()
{
    std::string str = "Hello, world";
    std::istringstream in(str);
    std::string word1, word2;

    in >> word1;
    in.seekg(0); // rewind
    in >> word2;

    std::cout << "word1 = " << word1 << '\n'
              << "word2 = " << word2 << '\n';
}
