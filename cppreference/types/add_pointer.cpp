// cppreference link https://en.cppreference.com/w/cpp/types/add_pointer
#include <iostream>
#include <type_traits>

template <typename F, typename Class>
void ptr_to_member_func_cvref_test(F Class::*)
{
    // F is an "abominable function type"
    using FF = std::add_pointer_t<F>;
    static_assert(std::is_same_v<F, FF>, "FF should be precisely F");
}

struct S {
    void f_ref() & { }
    void f_const() const { }
};

int main()
{
    int i = 123;
    int& ri = i;
    typedef std::add_pointer<decltype(i)>::type IntPtr;
    typedef std::add_pointer<decltype(ri)>::type IntPtr2;
    IntPtr pi = &i;
    std::cout << "i = " << i << "\n";
    std::cout << "*pi = " << *pi << "\n";

    static_assert(std::is_pointer<IntPtr>::value, "IntPtr should be a pointer");
    static_assert(std::is_same<IntPtr, int*>::value, "IntPtr should be a pointer to int");
    static_assert(std::is_same<IntPtr2, IntPtr>::value, "IntPtr2 should be equal to IntPtr");

    typedef std::remove_pointer<IntPtr>::type IntAgain;
    IntAgain j = i;
    std::cout << "j = " << j << "\n";

    static_assert(!std::is_pointer<IntAgain>::value, "IntAgain should not be a pointer");
    static_assert(std::is_same<IntAgain, int>::value, "IntAgain should be equal to int");

    ptr_to_member_func_cvref_test(&S::f_ref);
    ptr_to_member_func_cvref_test(&S::f_const);
}
