// cppreference link https://en.cppreference.com/w/cpp/types/type_info/hash_code
#include <functional>
#include <iostream>
#include <memory>
#include <string>
#include <typeinfo>
#include <unordered_map>

struct A {
    virtual ~A() { }
};

struct B : A { };
struct C : A { };

using TypeInfoRef = std::reference_wrapper<const std::type_info>;

struct Hasher {
    std::size_t operator()(TypeInfoRef code) const
    {
        return code.get().hash_code();
    }
};

struct EqualTo {
    bool operator()(TypeInfoRef lhs, TypeInfoRef rhs) const
    {
        return lhs.get() == rhs.get();
    }
};

int main()
{
    std::unordered_map<TypeInfoRef, std::string, Hasher, EqualTo> type_names;

    type_names[typeid(int)] = "int";
    type_names[typeid(double)] = "double";
    type_names[typeid(A)] = "A";
    type_names[typeid(B)] = "B";
    type_names[typeid(C)] = "C";

    int i;
    double d;
    A a;

    // note that we're storing pointer to type A
    std::unique_ptr<A> b(new B);
    std::unique_ptr<A> c(new C);

    std::cout << "i is " << type_names[typeid(i)] << '\n';
    std::cout << "d is " << type_names[typeid(d)] << '\n';
    std::cout << "a is " << type_names[typeid(a)] << '\n';
    std::cout << "*b is " << type_names[typeid(*b)] << '\n';
    std::cout << "*c is " << type_names[typeid(*c)] << '\n';
}
