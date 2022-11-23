// cplusplus link https://cplusplus.com/reference/fstream\basic_fstream\basic_fstream
// fstream constructor.
#include <fstream> // std::fstream

int main()
{

    std::fstream fs("test.txt", std::fstream::in | std::fstream::out);

    // i/o operations here

    fs.close();

    return 0;
}
