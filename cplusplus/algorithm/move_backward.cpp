// cplusplus link https://cplusplus.com/reference/algorithm\move_backward
// move_backward example
#include <algorithm> // std::move_backward
#include <iostream> // std::cout
#include <string> // std::string

int main()
{
    std::string elems[10] = { "air", "water", "fire", "earth" };

    // insert new element at the beginning:
    std::move_backward(elems, elems + 4, elems + 5);
    elems[0] = "ether";

    std::cout << "elems contains:";
    for (int i = 0; i < 10; ++i)
        std::cout << " [" << elems[i] << "]";
    std::cout << '\n';

    return 0;
}
