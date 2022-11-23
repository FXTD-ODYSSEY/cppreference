// cplusplus link https://cplusplus.com/reference/unordered_set\unordered_multiset\end
// unordered_multiset::begin/end example
#include <iostream>
#include <string>
#include <unordered_set>

int main()
{
    std::unordered_multiset<std::string> myums = { "father", "mother", "son", "daughter", "son", "son" };

    std::cout << "myums contains:";
    for (auto it = myums.begin(); it != myums.end(); ++it)
        std::cout << " " << *it;
    std::cout << std::endl;

    std::cout << "myums's buckets contain:\n";
    for (unsigned i = 0; i < myums.bucket_count(); ++i) {
        std::cout << "bucket #" << i << " contains:";
        for (auto local_it = myums.begin(i); local_it != myums.end(i); ++local_it)
            std::cout << " " << *local_it;
        std::cout << std::endl;
    }

    return 0;
}
