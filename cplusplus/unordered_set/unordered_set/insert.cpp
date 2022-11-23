// cplusplus link https://cplusplus.com/reference/unordered_set\unordered_set\insert
// unordered_set::insert
#include <array>
#include <iostream>
#include <string>
#include <unordered_set>

int main()
{
    std::unordered_set<std::string> myset = { "yellow", "green", "blue" };
    std::array<std::string, 2> myarray = { "black", "white" };
    std::string mystring = "red";

    myset.insert(mystring); // copy insertion
    myset.insert(mystring + "dish"); // move insertion
    myset.insert(myarray.begin(), myarray.end()); // range insertion
    myset.insert({ "purple", "orange" }); // initializer list insertion

    std::cout << "myset contains:";
    for (const std::string& x : myset)
        std::cout << " " << x;
    std::cout << std::endl;

    return 0;
}
