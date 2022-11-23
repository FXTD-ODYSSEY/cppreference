// cplusplus link https://cplusplus.com/reference/ostream\flush-free
// Flushing files (flush manipulator)
#include <fstream> // std::ofstream
#include <ostream> // std::flush

int main()
{

    std::ofstream outfile("test.txt");

    for (int n = 0; n < 100; n++)
        outfile << n << std::flush;

    outfile.close();

    return 0;
}
