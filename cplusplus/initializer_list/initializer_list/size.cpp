// cplusplus link https://cplusplus.com/reference/initializer_list\initializer_list\size
// initializer_list::size
#include <initializer_list> // std::initializer_list
#include <iostream> // std::cout

template <class T>
struct simple_container {
    T* data;
    unsigned n;
    simple_container(std::initializer_list<int> args)
    {
        data = new T[args.size()];
        n = 0;
        for (T x : args) {
            data[n++] = x;
        }
    }
    T* begin() { return data; }
    T* end() { return data + n; }
};

int main()
{
    simple_container<int> myobject { 10, 20, 30 };
    std::cout << "myobject contains:";
    for (int x : myobject)
        std::cout << ' ' << x;
    std::cout << '\n';
    return 0;
}
