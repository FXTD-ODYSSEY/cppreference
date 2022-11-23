// cplusplus link https://cplusplus.com/reference/algorithm\generate_n
// generate_n example
#include <algorithm> // std::generate_n
#include <iostream> // std::cout

int current = 0;
int UniqueNumber() { return ++current; }

int main()
{
    int myarray[9];

    std::generate_n(myarray, 9, UniqueNumber);

    std::cout << "myarray contains:";
    for (int i = 0; i < 9; ++i)
        std::cout << ' ' << myarray[i];
    std::cout << '\n';

    return 0;
}
