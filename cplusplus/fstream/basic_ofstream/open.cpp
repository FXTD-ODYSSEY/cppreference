// cplusplus link https://cplusplus.com/reference/fstream\basic_ofstream\open
// ofstream::open / ofstream::close
#include <fstream> // std::ofstream

int main()
{

    std::ofstream ofs;
    ofs.open("test.txt", std::ofstream::out | std::ofstream::app);

    ofs << " more lorem ipsum";

    ofs.close();

    return 0;
}
