// cplusplus link https://cplusplus.com/reference/unordered_set\unordered_multiset\insert
// unordered_multiset::insert
#include <array>
#include <iostream>
#include <string>
#include <unordered_set>

int main()
{
    std::unordered_multiset<std::string> myums = { "red", "green", "blue" };
    std::array<std::string, 2> myarray = { "red", "yellow" };
    std::string mystring = "red";

    myums.insert(mystring); // copy insertion
    myums.insert(mystring + "dish"); // move insertion
    myums.insert(myarray.begin(), myarray.end()); // range insertion
    myums.insert({ "purple", "orange" }); // initializer list insertion

    std::cout << "myums contains:";
    for (const std::string& x : myums)
        std::cout << " " << x;
    std::cout << std::endl;

    return 0;
}
