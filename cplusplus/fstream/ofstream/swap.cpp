// cplusplus link https://cplusplus.com/reference/fstream\ofstream\swap
// swapping ofstream objects
#include <fstream> // std::ofstream

int main()
{
    std::ofstream foo;
    std::ofstream bar("test.txt");

    foo.swap(bar);

    foo << "lorem ipsum";

    foo.close();

    return 0;
}
