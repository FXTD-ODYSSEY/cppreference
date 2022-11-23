// cplusplus link https://cplusplus.com/reference/new\nothrow
// nothrow example
#include <iostream> // std::cout
#include <new> // std::nothrow

int main()
{
    std::cout << "Attempting to allocate 1 MiB... ";
    char* p = new (std::nothrow) char[1048576];

    if (!p) { // null pointers are implicitly converted to false
        std::cout << "Failed!\n";
    } else {
        std::cout << "Succeeded!\n";
        delete[] p;
    }

    return 0;
}
