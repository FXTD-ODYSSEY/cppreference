// cplusplus link https://cplusplus.com/reference/ostream\ostream\flush
// Flushing files
#include <fstream> // std::ofstream

int main()
{

    std::ofstream outfile("test.txt");

    for (int n = 0; n < 100; ++n) {
        outfile << n;
        outfile.flush();
    }
    outfile.close();

    return 0;
}
