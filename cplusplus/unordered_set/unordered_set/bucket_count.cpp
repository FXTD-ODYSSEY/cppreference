// cplusplus link https://cplusplus.com/reference/unordered_set\unordered_set\bucket_count
// unordered_set::bucket_count
#include <iostream>
#include <string>
#include <unordered_set>

int main()
{
    std::unordered_set<std::string> myset = { "Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune" };

    unsigned n = myset.bucket_count();

    std::cout << "myset has " << n << " buckets.\n";

    for (unsigned i = 0; i < n; ++i) {
        std::cout << "bucket #" << i << " contains:";
        for (auto it = myset.begin(i); it != myset.end(i); ++it)
            std::cout << " " << *it;
        std::cout << "\n";
    }

    return 0;
}
