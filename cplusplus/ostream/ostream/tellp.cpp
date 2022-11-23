// cplusplus link https://cplusplus.com/reference/ostream\ostream\tellp
// position in output stream
#include <fstream> // std::ofstream

int main()
{

    std::ofstream outfile;
    outfile.open("test.txt");

    outfile.write("This is an apple", 16);
    long pos = outfile.tellp();
    outfile.seekp(pos - 7);
    outfile.write(" sam", 4);

    outfile.close();

    return 0;
}
