// cplusplus link https://cplusplus.com/reference/initializer_list\initializer_list\begin-free
// begin/end (initializer_list)
#include <initializer_list> // std::initializer_list
#include <iostream> // std::cout

template <class T>
void print_list(std::initializer_list<T> il)
{
    for (const T* it = begin(il); it != end(il); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';
}

int main()
{
    print_list({ 10, 20, 30 });
    return 0;
}
