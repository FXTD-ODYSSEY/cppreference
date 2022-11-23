// cplusplus link https://cplusplus.com/reference/new\set_new_handler
// new_handler example
#include <cstdlib> // std::exit
#include <iostream> // std::cout
#include <new> // std::set_new_handler

void no_memory()
{
    std::cout << "Failed to allocate memory!\n";
    std::exit(1);
}

int main()
{
    std::set_new_handler(no_memory);
    std::cout << "Attempting to allocate 1 GiB...";
    char* p = new char[1024 * 1024 * 1024];
    std::cout << "Ok\n";
    delete[] p;
    return 0;
}
