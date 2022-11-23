// cplusplus link https://cplusplus.com/reference/string\string\rfind
// string::rfind
#include <cstddef>
#include <iostream>
#include <string>

int main()
{
    std::string str("The sixth sick sheik's sixth sheep's sick.");
    std::string key("sixth");

    std::size_t found = str.rfind(key);
    if (found != std::string::npos)
        str.replace(found, key.length(), "seventh");

    std::cout << str << '\n';

    return 0;
}
