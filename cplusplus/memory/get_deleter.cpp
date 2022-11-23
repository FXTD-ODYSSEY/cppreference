// cplusplus link https://cplusplus.com/reference/memory\get_deleter
// get_deleter example
#include <iostream>
#include <memory>

struct D { // a verbose array deleter:
    void operator()(int* p)
    {
        std::cout << "[deleter called]\n";
        delete[] p;
    }
};

int main()
{
    std::shared_ptr<int> foo(new int[10], D());

    int* bar = new int[20];

    // use foo's deleter to delete bar (which is unmanaged):
    (*std::get_deleter<D>(foo))(bar);

    return 0;
    // foo's deleter called automatically
}
