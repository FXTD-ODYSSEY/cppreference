// cplusplus link https://cplusplus.com/reference/fstream\basic_ifstream\swap-free
// swapping ifstream objects
#include <fstream> // std::ifstream
#include <iostream> // std::cout

int main()
{
    std::ifstream foo;
    std::ifstream bar("test.txt");

    swap(foo, bar);

    char c = foo.get();

    while (foo.good()) {
        std::cout << c;
        c = foo.get();
    }

    foo.close();

    return 0;
}
