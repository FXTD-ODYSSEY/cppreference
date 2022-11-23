// cplusplus link https://cplusplus.com/reference/ostream\ostream\put
// typewriter
#include <fstream> // std::ofstream
#include <iostream> // std::cin, std::cout

int main()
{
    std::ofstream outfile("test.txt");
    char ch;

    std::cout << "Type some text (type a dot to finish):\n";
    do {
        ch = std::cin.get();
        outfile.put(ch);
    } while (ch != '.');

    return 0;
}
