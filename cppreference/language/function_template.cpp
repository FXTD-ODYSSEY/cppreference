// cppreference link https://en.cppreference.com/w/cpp/language/function_template
#include <iostream>

struct A { };

template <class T>
void f(T) { std::cout << "#1\n"; } // #1

template <class T>
void g(T* t)
{
    f(t); // f() POR
}

template <class T>
void f(T*) { std::cout << "#2\n"; } // #2
template <>
void f<>(A*) { std::cout << "#3\n"; } // #3

int main()
{
    A* p = nullptr;
    g(p); // POR of g() and f()
}

// #1 is added to the candidate list as a result of the ordinary lookup;
// #2 is defined after POR but it is added to the candidate list via ADL lookup.
// #2 is selected among the primary templates, being the better match.
// Since #3 is declared after #2, it is an explicit specialization of #2;
// therefore, selected as the function to call.
