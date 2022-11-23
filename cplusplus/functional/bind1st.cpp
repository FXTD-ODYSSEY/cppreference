// cplusplus link https://cplusplus.com/reference/functional\bind1st
// bind1st example
#include <algorithm>
#include <functional>
#include <iostream>
using namespace std;

int main()
{
    int numbers[] = { 10, 20, 30, 40, 50, 10 };
    int cx;
    cx = count_if(numbers, numbers + 6, bind1st(equal_to<int>(), 10));
    cout << "There are " << cx << " elements that are equal to 10.\n";
    return 0;
}
