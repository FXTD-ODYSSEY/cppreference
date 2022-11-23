// cplusplus link https://cplusplus.com/reference/unordered_set\unordered_set\bucket
// unordered_set::bucket
#include <iostream>
#include <string>
#include <unordered_set>

int main()
{
    std::unordered_set<std::string> myset = { "water", "sand", "ice", "foam" };

    for (const std::string& x : myset) {
        std::cout << x << " is in bucket #" << myset.bucket(x) << std::endl;
    }

    return 0;
}
