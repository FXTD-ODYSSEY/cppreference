// cplusplus link https://cplusplus.com/reference/functional\mem_fun_ref
// mem_fun_ref example
#include <algorithm>
#include <functional>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<string> numbers;

    // populate vector:
    numbers.push_back("one");
    numbers.push_back("two");
    numbers.push_back("three");
    numbers.push_back("four");
    numbers.push_back("five");

    vector<int> lengths(numbers.size());

    transform(numbers.begin(), numbers.end(), lengths.begin(), mem_fun_ref(&string::length));

    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " has " << lengths[i] << " letters.\n";
    }
    return 0;
}
