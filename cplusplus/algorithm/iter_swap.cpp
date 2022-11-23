// cplusplus link https://cplusplus.com/reference/algorithm\iter_swap
// iter_swap example
#include <algorithm> // std::iter_swap
#include <iostream> // std::cout
#include <vector> // std::vector

int main()
{

    int myints[] = { 10, 20, 30, 40, 50 }; //   myints:  10  20  30  40  50
    std::vector<int> myvector(4, 99); // myvector:  99  99  99  99

    std::iter_swap(myints, myvector.begin()); //   myints: [99] 20  30  40  50
                                              // myvector: [10] 99  99  99

    std::iter_swap(myints + 3, myvector.begin() + 2); //   myints:  99  20  30 [99] 50
                                                      // myvector:  10  99 [40] 99

    std::cout << "myvector contains:";
    for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';

    return 0;
}
