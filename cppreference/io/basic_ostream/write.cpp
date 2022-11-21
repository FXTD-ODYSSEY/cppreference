// cppreference link https://en.cppreference.com/w/cpp/io/basic_ostream/write
#include <iostream>

int main()
{
    int n = 0x41424344;
    std::cout.write(reinterpret_cast<char*>(&n), sizeof n) << '\n';

    char c[] = "This is sample text.";
    std::cout.write(c, 4).write("!\n", 2);
}
