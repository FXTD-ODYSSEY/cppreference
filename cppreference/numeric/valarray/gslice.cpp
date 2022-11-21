// cppreference link https://en.cppreference.com/w/cpp/numeric/valarray/gslice
#include <iostream>
#include <valarray>
void test_print(std::valarray<int>& v, int planes, int rows, int cols)
{
    for (int r = 0; r < rows; ++r) {
        for (int z = 0; z < planes; ++z) {
            for (int c = 0; c < cols; ++c)
                std::cout << v[z * rows * cols + r * cols + c] << ' ';
            std::cout << "  ";
        }
        std::cout << '\n';
    }
}
int main()
{
    std::valarray<int> v = // 3d array: 2 x 4 x 3 elements
        { 111, 112, 113, 121, 122, 123, 131, 132, 133, 141, 142, 143,
            211, 212, 213, 221, 222, 223, 231, 232, 233, 241, 242, 243 };
    // int ar3d[2][4][3]
    std::cout << "Initial 2x4x3 array:\n";
    test_print(v, 2, 4, 3);

    // update every value in the first columns of both planes
    v[std::gslice(0, { 2, 4 }, { 4 * 3, 3 })] = 1; // two level one strides of 12 elements
                                                   // then four level two strides of 3 elements

    // subtract the third column from the second column in the 1st plane
    v[std::gslice(1, { 1, 4 }, { 4 * 3, 3 })] -= v[std::gslice(2, { 1, 4 }, { 4 * 3, 3 })];

    std::cout << "\n"
                 "After column operations:\n";
    test_print(v, 2, 4, 3);
}
