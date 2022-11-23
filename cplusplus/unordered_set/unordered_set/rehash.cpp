// cplusplus link https://cplusplus.com/reference/unordered_set\unordered_set\rehash
// unordered_set::rehash
#include <iostream>
#include <string>
#include <unordered_set>

int main()
{
    std::unordered_set<std::string> myset;

    myset.rehash(12);

    myset.insert("office");
    myset.insert("house");
    myset.insert("gym");
    myset.insert("parking");
    myset.insert("highway");

    std::cout << "current bucket_count: " << myset.bucket_count() << std::endl;

    return 0;
}
