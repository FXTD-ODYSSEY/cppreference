// cppreference link https://en.cppreference.com/w/cpp/io/basic_ios/exceptions
#include <fstream>
#include <iostream>

int main()
{
    int ivalue;
    try {
        std::ifstream in("in.txt");
        in.exceptions(std::ifstream::failbit); // may throw
        in >> ivalue; // may throw
    } catch (const std::ios_base::failure& fail) {
        // handle exception here
        std::cout << fail.what() << '\n';
    }
}
