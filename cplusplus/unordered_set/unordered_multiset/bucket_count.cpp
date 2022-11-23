// cplusplus link https://cplusplus.com/reference/unordered_set\unordered_multiset\bucket_count
// unordered_multiset::bucket_count
#include <iostream>
#include <string>
#include <unordered_set>

int main()
{
    std::unordered_multiset<std::string> myums = { "Klingon", "Vulcan", "Klingon", "Cardassian", "Vulcan", "Human" };

    unsigned n = myums.bucket_count();

    std::cout << "myums has " << n << " buckets.\n";

    for (unsigned i = 0; i < n; ++i) {
        std::cout << "bucket #" << i << " contains:";
        for (auto it = myums.begin(i); it != myums.end(i); ++it)
            std::cout << " " << *it;
        std::cout << "\n";
    }

    return 0;
}
