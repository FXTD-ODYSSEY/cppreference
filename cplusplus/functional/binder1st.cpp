// cplusplus link https://cplusplus.com/reference/functional\binder1st
// binder1st example
#include <algorithm>
#include <functional>
#include <iostream>
using namespace std;

int main()
{
    binder1st<equal_to<int>> equal_to_10(equal_to<int>(), 10);
    int numbers[] = { 10, 20, 30, 40, 50, 10 };
    int cx;
    cx = count_if(numbers, numbers + 6, equal_to_10);
    cout << "There are " << cx << " elements equal to 10.\n";
    return 0;
}
