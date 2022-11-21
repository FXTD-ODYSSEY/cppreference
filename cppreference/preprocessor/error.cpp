// cppreference link https://en.cppreference.com/w/cpp/preprocessor/error
#if __STDC_HOSTED__ != 1
#error "Not a hosted implementation"
#endif

#if __cplusplus >= 202302L
#warning "Using #warning as a standard feature"
#endif

#include <iostream>
int main()
{
    std::cout << "The implementation used is hosted";
}
