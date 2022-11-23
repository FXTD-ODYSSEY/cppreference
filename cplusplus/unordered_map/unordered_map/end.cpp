// cplusplus link https://cplusplus.com/reference/unordered_map\unordered_map\end
// unordered_map::begin/end example
#include <iostream>
#include <unordered_map>

int main()
{
    std::unordered_map<std::string, std::string> mymap;
    mymap = { { "Australia", "Canberra" }, { "U.S.", "Washington" }, { "France", "Paris" } };

    std::cout << "mymap contains:";
    for (auto it = mymap.begin(); it != mymap.end(); ++it)
        std::cout << " " << it->first << ":" << it->second;
    std::cout << std::endl;

    std::cout << "mymap's buckets contain:\n";
    for (unsigned i = 0; i < mymap.bucket_count(); ++i) {
        std::cout << "bucket #" << i << " contains:";
        for (auto local_it = mymap.begin(i); local_it != mymap.end(i); ++local_it)
            std::cout << " " << local_it->first << ":" << local_it->second;
        std::cout << std::endl;
    }

    return 0;
}
