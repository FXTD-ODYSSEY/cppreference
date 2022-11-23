// cplusplus link https://cplusplus.com/reference/string\basic_string\shrink_to_fit
// string::shrink_to_fit
#include <iostream>
#include <string>

int main()
{
    std::string str(100, 'x');
    std::cout << "1. capacity of str: " << str.capacity() << '\n';

    str.resize(10);
    std::cout << "2. capacity of str: " << str.capacity() << '\n';

    str.shrink_to_fit();
    std::cout << "3. capacity of str: " << str.capacity() << '\n';

    return 0;
}
