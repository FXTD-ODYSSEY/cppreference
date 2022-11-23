// cplusplus link https://cplusplus.com/reference/string\basic_string\copy
// string::copy
#include <iostream>
#include <string>

int main()
{
    char buffer[20];
    std::string str("Test string...");
    std::size_t length = str.copy(buffer, 6, 5);
    buffer[length] = '\0';
    std::cout << "buffer contains: " << buffer << '\n';
    return 0;
}
