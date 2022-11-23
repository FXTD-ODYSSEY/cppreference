// cplusplus link https://cplusplus.com/reference/functional\not1
// not1 example
#include <algorithm> // std::count_if
#include <functional> // std::not1
#include <iostream> // std::cout

struct IsOdd {
    bool operator()(const int& x) const { return x % 2 == 1; }
    typedef int argument_type;
};

int main()
{
    int values[] = { 1, 2, 3, 4, 5 };
    int cx = std::count_if(values, values + 5, std::not1(IsOdd()));
    std::cout << "There are " << cx << " elements with even values.\n";
    return 0;
}
