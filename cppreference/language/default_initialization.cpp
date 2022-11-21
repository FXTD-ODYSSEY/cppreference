// cppreference link https://en.cppreference.com/w/cpp/language/default_initialization
#include <string>

struct T1 {
    int mem;
};

struct T2 {
    int mem;
    T2() { } // "mem" is not in the initializer list
};

int n; // static non-class, a two-phase initialization is done:
       // 1) zero initialization initializes n to zero
       // 2) default initialization does nothing, leaving n being zero

int main()
{
    int n; // non-class, the value is indeterminate
    std::string s; // class, calls default ctor, the value is "" (empty string)
    std::string a[2]; // array, default-initializes the elements, the value is {"", ""}
    //  int& r;           // error: a reference
    //  const int n;      // error: a const non-class
    //  const T1 t1;      // error: const class with implicit default ctor
    T1 t1; // class, calls implicit default ctor
    const T2 t2; // const class, calls the user-provided default ctor
                 // t2.mem is default-initialized (to indeterminate value)
}
