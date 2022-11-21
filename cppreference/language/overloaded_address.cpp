// cppreference link https://en.cppreference.com/w/cpp/language/overloaded_address
int f(int) { return 1; }
int f(double) { return 2; }

void g(int (&f1)(int), int (*f2)(double)) { }

template <int (*F)(int)>
struct Templ { };

struct Foo {
    int mf(int) { return 3; }
    int mf(double) { return 4; }
};

struct Emp {
    void operator<<(int (*)(double)) { }
};

int main()
{
    // 1. initialization
    int (*pf)(double) = f; // selects int f(double)
    int (&rf)(int) = f; // selects int f(int)
    int (Foo::*mpf)(int) = &Foo::mf; // selects int mf(int)

    // 2. assignment
    pf = nullptr;
    pf = &f; // selects int f(double)

    // 3. function argument
    g(f, f); // selects int f(int) for the 1st argument
             // and int f(double) for the second

    // 4. user-defined operator
    Emp {} << f; // selects int f(double)

    // 5. return value
    auto foo = []() -> int (*)(int) {
        return f; // selects int f(int)
    };

    // 6. cast
    auto p = static_cast<int (*)(int)>(f); // selects int f(int)

    // 7. template argument
    Templ<f> t; // selects int f(int)
}
