// cplusplus link https://cplusplus.com/reference/memory\raw_storage_iterator
// raw_storage_iterator example
#include <iostream>
#include <memory>
#include <string>
#include <vector>

int main()
{
    std::vector<std::string> myvector;
    myvector.push_back("first");
    myvector.push_back("second");
    myvector.push_back("third");

    std::pair<std::string*, std::ptrdiff_t> result = std::get_temporary_buffer<std::string>(3);
    std::string* pstr = result.first;

    std::raw_storage_iterator<std::string*, std::string> raw_it(pstr);

    copy(myvector.begin(), myvector.end(), raw_it);

    for (int i = 0; i < 3; i++)
        std::cout << pstr[i] << ' ';
    std::cout << '\n';

    std::return_temporary_buffer(pstr);

    return 0;
}
