// cplusplus link https://cplusplus.com/reference/unordered_set\unordered_set\cbegin
// unordered_set::cbegin/cend example
#include <iostream>
#include <string>
#include <unordered_set>

int main()
{
    std::unordered_set<std::string> myset = { "Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune" };

    std::cout << "myset contains:";
    for (auto it = myset.cbegin(); it != myset.cend(); ++it)
        std::cout << " " << *it; // cannot modify *it
    std::cout << std::endl;

    std::cout << "myset's buckets contain:\n";
    for (unsigned i = 0; i < myset.bucket_count(); ++i) {
        std::cout << "bucket #" << i << " contains:";
        for (auto local_it = myset.cbegin(i); local_it != myset.cend(i); ++local_it)
            std::cout << " " << *local_it;
        std::cout << std::endl;
    }

    return 0;
}
