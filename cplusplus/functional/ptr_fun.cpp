// cplusplus link https://cplusplus.com/reference/functional\ptr_fun
// ptr_fun example
#include <algorithm>
#include <cstdlib>
#include <functional>
#include <iostream>
#include <numeric>
using namespace std;

int main()
{
    char* foo[] = { "10", "20", "30", "40", "50" };
    int bar[5];
    int sum;
    transform(foo, foo + 5, bar, ptr_fun(atoi));
    sum = accumulate(bar, bar + 5, 0);
    cout << "sum = " << sum << endl;
    return 0;
}
