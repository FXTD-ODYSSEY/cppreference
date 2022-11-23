// cplusplus link https://cplusplus.com/reference/fstream\ofstream\swap-free
// swapping ofstream objects
#include <fstream> // std::ofstream

int main()
{
    std::ofstream foo;
    std::ofstream bar("test.txt");

    swap(foo, bar);

    foo << "lorem ipsum";

    foo.close();

    return 0;
}
