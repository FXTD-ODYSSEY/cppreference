// cppreference link https://en.cppreference.com/w/cpp/language/friend
#include <iostream>
#include <sstream>

class MyClass {
    int i; // friends have access to non-public, non-static
    static inline int id { 6 }; // and static (possibly inline) members

    friend std::ostream& operator<<(std::ostream& out, const MyClass&);
    friend std::istream& operator>>(std::istream& in, MyClass&);
    friend void change_id(int);

public:
    MyClass(int i = 0)
        : i(i)
    {
    }
};

std::ostream& operator<<(std::ostream& out, const MyClass& mc)
{
    return out << "MyClass::id = " << MyClass::id << "; i = " << mc.i;
}

std::istream& operator>>(std::istream& in, MyClass& mc)
{
    return in >> mc.i;
}

void change_id(int id) { MyClass::id = id; }

int main()
{
    MyClass mc(7);
    std::cout << mc << '\n';
    //  mc.i = 333*2;  // error: i is a private member
    std::istringstream("100") >> mc;
    std::cout << mc << '\n';
    //  MyClass::id = 222*3;  // error: id is a private member
    change_id(9);
    std::cout << mc << '\n';
}
