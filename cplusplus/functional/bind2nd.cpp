// cplusplus link https://cplusplus.com/reference/functional\bind2nd
// bind2nd example
#include <algorithm>
#include <functional>
#include <iostream>
using namespace std;

int main()
{
    int numbers[] = { 10, -20, -30, 40, -50 };
    int cx;
    cx = count_if(numbers, numbers + 5, bind2nd(less<int>(), 0));
    cout << "There are " << cx << " negative elements.\n";
    return 0;
}
