// cppreference link https://en.cppreference.com/w/cpp/numeric/valarray/slice_array/operator%3D
#include <iostream>
#include <valarray>

void print(char const* remark, std::valarray<int> const& v = {})
{
    std::cout << remark;
    if (v.size() != 0) {
        std::cout << ":";
        for (int e : v)
            std::cout << ' ' << e;
    }
    std::cout << '\n';
}

int main()
{
    std::valarray<int> v1 { 1, 2, 3, 4, 5, 6, 7, 8 };
    std::slice_array<int> s1 = v1[std::slice(1, 4, 2)];
    print("v1", v1);
    print("s1", s1);

    print("\n(1) operator=( const T& )");
    print("s1 = 42");
    s1 = 42; // (1)
    print("s1", s1);
    print("v1", v1);

    print("\n(2) operator=( const std::valarray<T>& )");
    std::valarray<int> v2 { 10, 11, 12, 13, 14, 15 };
    print("v2", v2);
    print("s1 = v2");
    s1 = v2; // (2)
    print("s1", s1);
    print("v1", v1);

    print("\n(3) operator=( const slice_array& )");
    v1 = { 1, 2, 3, 4, 5, 6, 7, 8 };
    std::slice_array<int> s2 = v1[std::slice(0, 4, 1)];
    std::slice_array<int> s3 = v2[std::slice(1, 4, 1)];
    print("v1", v1);
    print("v2", v2);
    print("s2", s2);
    print("s3", s3);
    print("s2 = s3");
    s2 = s3; // (3) Note: LHS and RHS must have same size.
    print("s2", s2);
    print("v1", v1);
}
