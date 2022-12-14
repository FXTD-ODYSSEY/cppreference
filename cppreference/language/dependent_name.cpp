// cppreference link https://en.cppreference.com/w/cpp/language/dependent_name
template <typename T>
struct S {
    template <typename U>
    void foo() { }
};

template <typename T>
void bar()
{
    S<T> s;
    s.foo<T>(); // error: < parsed as less than operator
    s.template foo<T>(); // OK
}
