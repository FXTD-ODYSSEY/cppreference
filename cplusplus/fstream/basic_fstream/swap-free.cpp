// cplusplus link https://cplusplus.com/reference/fstream\basic_fstream\swap-free
// swapping fstream objects
#include <fstream> // std::fstream

int main()
{
    std::fstream foo;
    std::fstream bar("test.txt");

    swap(foo, bar);

    foo << "lorem ipsum";

    foo.close();

    return 0;
}
