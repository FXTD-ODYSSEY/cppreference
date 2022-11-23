// cplusplus link https://cplusplus.com/reference/unordered_set\unordered_set\end
// unordered_set::begin/end example
#include <iostream>
#include <string>
#include <unordered_set>

int main()
{
    std::unordered_set<std::string> myset = { "Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune" };

    std::cout << "myset contains:";
    for (auto it = myset.begin(); it != myset.end(); ++it)
        std::cout << " " << *it;
    std::cout << std::endl;

    std::cout << "myset's buckets contain:\n";
    for (unsigned i = 0; i < myset.bucket_count(); ++i) {
        std::cout << "bucket #" << i << " contains:";
        for (auto local_it = myset.begin(i); local_it != myset.end(i); ++local_it)
            std::cout << " " << *local_it;
        std::cout << std::endl;
    }

    return 0;
}
