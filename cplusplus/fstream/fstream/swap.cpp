// cplusplus link https://cplusplus.com/reference/fstream\fstream\swap
// swapping fstream objects
#include <fstream> // std::fstream

int main()
{
    std::fstream foo;
    std::fstream bar("test.txt");

    foo.swap(bar);

    foo << "lorem ipsum";

    foo.close();

    return 0;
}
