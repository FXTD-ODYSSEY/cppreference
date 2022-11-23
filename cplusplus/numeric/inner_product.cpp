// cplusplus link https://cplusplus.com/reference/numeric\inner_product
// inner_product example
#include <functional> // std::minus, std::divides
#include <iostream> // std::cout
#include <numeric> // std::inner_product

int myaccumulator(int x, int y) { return x - y; }
int myproduct(int x, int y) { return x + y; }

int main()
{
    int init = 100;
    int series1[] = { 10, 20, 30 };
    int series2[] = { 1, 2, 3 };

    std::cout << "using default inner_product: ";
    std::cout << std::inner_product(series1, series1 + 3, series2, init);
    std::cout << '\n';

    std::cout << "using functional operations: ";
    std::cout << std::inner_product(series1, series1 + 3, series2, init,
        std::minus<int>(), std::divides<int>());
    std::cout << '\n';

    std::cout << "using custom functions: ";
    std::cout << std::inner_product(series1, series1 + 3, series2, init,
        myaccumulator, myproduct);
    std::cout << '\n';

    return 0;
}
