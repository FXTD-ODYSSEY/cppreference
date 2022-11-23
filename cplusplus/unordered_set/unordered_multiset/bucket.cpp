// cplusplus link https://cplusplus.com/reference/unordered_set\unordered_multiset\bucket
// unordered_multiset::bucket
#include <iostream>
#include <string>
#include <unordered_set>

int main()
{
    std::unordered_multiset<std::string> myums = { "water", "sand", "ice", "water" };

    for (const std::string& x : myums) {
        std::cout << x << " is in bucket #" << myums.bucket(x) << std::endl;
    }

    return 0;
}
