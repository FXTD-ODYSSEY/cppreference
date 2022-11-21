// cppreference link https://en.cppreference.com/w/cpp/language/template_parameters
#include <array>
#include <iostream>
#include <numeric>

// simple non-type template parameter
template <int N>
struct S {
    int a[N];
};

template <const char*>
struct S2 { };

// complicated non-type example
template <
    char c, // integral type
    int (&ra)[5], // lvalue reference to object (of array type)
    int (*pf)(int), // pointer to function
    int (S<10>::*a)[10] // pointer to member object (of type int[10])
    >
struct Complicated {
    // calls the function selected at compile time
    // and stores the result in the array selected at compile time
    void foo(char base)
    {
        ra[4] = pf(c - base);
    }
};

//  S2<"fail"> s2;        // error: string literal cannot be used
char okay[] = "okay"; // static object with linkage
//  S2<&okay[0]> s3;      // error: array element has no linkage
S2<okay> s4; // works

int a[5];
int f(int n) { return n; }

// C++20: NTTP can be a literal class type
template <std::array arr>
constexpr auto sum() { return std::accumulate(arr.cbegin(), arr.cend(), 0); }

// C++20: class template arguments are deduced at the call site
static_assert(sum<std::array<double, 8> { 3, 1, 4, 1, 5, 9, 2, 6 }>() == 31.0);
// C++20: NTTP argument deduction and CTAD
static_assert(sum<std::array { 2, 7, 1, 8, 2, 8 }>() == 28);

int main()
{
    S<10> s; // s.a is an array of 10 int
    s.a[9] = 4;

    Complicated<'2', a, f, &S<10>::a> c;
    c.foo('0');

    std::cout << s.a[9] << a[4] << '\n';
}
