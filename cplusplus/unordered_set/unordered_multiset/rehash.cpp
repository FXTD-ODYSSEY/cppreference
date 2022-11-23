// cplusplus link https://cplusplus.com/reference/unordered_set\unordered_multiset\rehash
// unordered_multiset::rehash
#include <iostream>
#include <string>
#include <unordered_set>

int main()
{
    std::unordered_multiset<std::string> myums;

    myums.rehash(12);

    myums.insert("red");
    myums.insert("red");
    myums.insert("blue");
    myums.insert("green");
    myums.insert("yellow");

    std::cout << "current bucket_count: " << myums.bucket_count() << std::endl;

    return 0;
}
