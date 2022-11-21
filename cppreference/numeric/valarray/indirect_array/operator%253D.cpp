// cppreference link https://en.cppreference.com/w/cpp/numeric/valarray/indirect_array/operator%3D
#include <iomanip>
#include <iostream>
#include <numeric>
#include <valarray>

void print(int n, std::valarray<int> const& v)
{
    std::cout << n << ':';
    for (int e : v)
        std::cout << std::setw(3) << e;
    std::cout << '\n';
}

int main()
{
    std::valarray<int> v(8);
    std::iota(std::begin(v), std::end(v), 0);
    print(1, v);

    std::valarray<std::size_t> idx { 1, 3, 5, 7 };
    const std::indirect_array<int> ia = v[idx];
    // 'ia' refers to v[1], v[3], v[5], v[7]
    ia = -1; // (1), effectively:
             // v[1] = v[3] = v[5] = v[7] = -1;
    print(2, v);

    ia = /*std::valarray<int>*/ { -1, -2, -3, -4 }; // (2),
                                                    // effectively: v[1]=-1, v[3]=-2, v[5]=-3, v[7]=-4;
    print(3, v);

    std::valarray<std::size_t> idx2 { 0, 2, 4, 6 };
    const std::indirect_array<int> ia2 = v[idx2];
    // 'ia2' refers to v[0], v[2], v[4], v[6]
    ia = ia2; // (3), effectively:
              // v[1]=v[0], v[3]=v[2], v[5]=v[4], v[7]=v[6];
    print(4, v);
}
