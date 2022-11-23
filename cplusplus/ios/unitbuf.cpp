// cplusplus link https://cplusplus.com/reference/ios\unitbuf
// modify unifbuf flag
#include <fstream> // std::ofstream
#include <ios> // std::unitbuf

int main()
{
    std::ofstream outfile("test.txt");
    outfile << std::unitbuf << "Test "
            << "file" << '\n'; // flushed three times
    outfile.close();
    return 0;
}
