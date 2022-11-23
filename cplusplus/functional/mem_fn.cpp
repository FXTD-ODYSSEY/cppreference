// cplusplus link https://cplusplus.com/reference/functional\mem_fn
// mem_fn example
#include <functional> // std::mem_fn
#include <iostream> // std::cout

struct int_holder {
    int value;
    int triple() { return value * 3; }
};

int main()
{
    int_holder five { 5 };

    // call member directly:
    std::cout << five.triple() << '\n';

    // same as above using a mem_fn:
    auto triple = std::mem_fn(&int_holder::triple);
    std::cout << triple(five) << '\n';

    return 0;
}
