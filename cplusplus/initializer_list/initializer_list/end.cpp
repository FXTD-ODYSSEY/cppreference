// cplusplus link https://cplusplus.com/reference/initializer_list\initializer_list\end
// initializer_list::begin/end
#include <initializer_list> // std::initializer_list
#include <iostream> // std::cout
#include <sstream> // std::stringstream
#include <string> // std::string

struct myclass {
    std::string str;
    myclass(std::initializer_list<int> args)
    {
        std::stringstream ss;
        std::initializer_list<int>::iterator it; // same as: const int* it
        for (it = args.begin(); it != args.end(); ++it)
            ss << ' ' << *it;
        str = ss.str();
    }
};

int main()
{
    myclass myobject { 10, 20, 30 };
    std::cout << "myobject contains:" << myobject.str << '\n';
    return 0;
}
