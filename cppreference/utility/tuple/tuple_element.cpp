// cppreference link https://en.cppreference.com/w/cpp/utility/tuple/tuple_element
#include <iostream>
#include <string>
#include <tuple>

template <typename T>
void printHelper() { std::cout << "unknown type\n"; }
template <>
void printHelper<int>() { std::cout << "int\n"; }
template <>
void printHelper<bool>() { std::cout << "bool\n"; }
template <>
void printHelper<char>() { std::cout << "char\n"; }
template <>
void printHelper<std::string>() { std::cout << "std::string\n"; }

template <std::size_t I, class T>
void printTypeAtIndex()
{
    std::cout << "index " << I << " has type: ";
    using SelectedType = std::tuple_element_t<I, T>;
    printHelper<SelectedType>();
}

int main()
{
    struct MyStruct { };
    using MyTuple = std::tuple<int, char, bool, std::string, MyStruct>;
    printTypeAtIndex<0, MyTuple>();
    printTypeAtIndex<1, MyTuple>();
    printTypeAtIndex<2, MyTuple>();
    printTypeAtIndex<3, MyTuple>();
    printTypeAtIndex<4, MyTuple>();
}
