// cplusplus link https://cplusplus.com/reference/memory\pointer_traits
// pointer_traits example
#include <iostream>
#include <memory>

// using pointer_traits to determine return type:
template <class T>
typename std::pointer_traits<T>::element_type dereference_pointer(T pt)
{
    return *pt;
}

int main()
{
    int* foo = new int(1);
    std::shared_ptr<int> bar(new int(2));

    std::cout << "foo: " << dereference_pointer(foo) << '\n';
    std::cout << "bar: " << dereference_pointer(bar) << '\n';

    delete foo;
    return 0;
}
