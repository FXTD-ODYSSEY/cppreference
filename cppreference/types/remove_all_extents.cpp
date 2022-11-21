// cppreference link https://en.cppreference.com/w/cpp/types/remove_all_extents
#include <iostream>
#include <type_traits>
#include <typeinfo>

template <class A>
void info(const A&)
{
    typedef typename std::remove_all_extents<A>::type Type;
    std::cout << "underlying type: " << typeid(Type).name() << '\n';
}

int main()
{
    float a0;
    float a1[1][2][3];
    float a2[1][1][1][1][2];
    float* a3;
    int a4[3][2];
    double a5[2][3];
    struct X {
        int m;
    } x0[3][3];

    info(a0);
    info(a1);
    info(a2);
    info(a3);
    info(a4);
    info(a5);
    info(x0);
}
