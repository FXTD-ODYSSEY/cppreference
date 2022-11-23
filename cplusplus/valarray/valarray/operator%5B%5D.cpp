// cplusplus link https://cplusplus.com/reference/valarray\valarray\operator%5B%5D
// valarray::operator[] example
#include <iostream> // std::cout
#include <valarray> // std::valarray, std::slice, std::gslice

int main()
{
    std::valarray<int> myarray(10); //  0  0  0  0  0  0  0  0  0  0

    // slice:
    myarray[std::slice(2, 3, 3)] = 10; //  0  0 10  0  0 10  0  0 10  0

    // gslice:
    size_t lengths[] = { 2, 2 };
    size_t strides[] = { 6, 2 };
    myarray[std::gslice(1, std::valarray<size_t>(lengths, 2), std::valarray<size_t>(strides, 2))] = 20;
    //  0 20 10 20  0 10  0 20 10 20

    // mask:
    std::valarray<bool> mymask(10);
    for (int i = 0; i < 10; ++i)
        mymask[i] = ((i % 2) == 0);
    myarray[mymask] += std::valarray<int>(3, 5); //  3 20 13 20  3 10  3 20 13 20

    // indirect:
    size_t sel[] = { 2, 5, 7 };
    std::valarray<size_t> myselection(sel, 3); //  3 20 99 20  3 99  3 99 13 20
    myarray[myselection] = 99;

    std::cout << "myarray: ";
    for (size_t i = 0; i < myarray.size(); ++i)
        std::cout << myarray[i] << ' ';
    std::cout << '\n';

    return 0;
}
