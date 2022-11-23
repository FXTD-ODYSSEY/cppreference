// cplusplus link https://cplusplus.com/reference/exception\exception
// exception example
#include <exception> // std::exception
#include <iostream> // std::cerr
#include <typeinfo> // operator typeid

class Polymorphic {
    virtual void member() { }
};

int main()
{
    try {
        Polymorphic* pb = 0;
        typeid(*pb); // throws a bad_typeid exception
    } catch (std::exception& e) {
        std::cerr << "exception caught: " << e.what() << '\n';
    }
    return 0;
}
