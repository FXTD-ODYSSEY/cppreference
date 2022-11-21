// cppreference link https://en.cppreference.com/w/cpp/string/basic_string/find_last_not_of
#include <iostream>
#include <string>

void show_pos(const std::string& str, std::string::size_type found)
{
    if (found != std::string::npos)
        std::cout << "[" << found << "] = \'" << str[found] << "\'\n";
    else
        std::cout << "not found"
                     "\n";
}

int main()
{
    std::string str { "abc_123" };
    char const* skip_set { "0123456789" };
    std::string::size_type str_last_pos { std::string::npos };

    show_pos(str, str.find_last_not_of(skip_set)); // [3] = '_'

    str_last_pos = 2;
    show_pos(str, str.find_last_not_of(skip_set, str_last_pos)); // [2] = 'c'

    str_last_pos = 2;
    show_pos(str, str.find_last_not_of('c', str_last_pos)); // [1] = 'b'

    const char arr[] { '3', '4', '5' };
    show_pos(str, str.find_last_not_of(arr)); // [5] = '2'

    str_last_pos = 2;
    std::string::size_type skip_set_size { 4 };
    show_pos(str, str.find_last_not_of(skip_set, str_last_pos,
                      skip_set_size)); // [2] = 'c'

    show_pos(str, str.find_last_not_of("abc")); // [6] = '3'

    str_last_pos = 2;
    show_pos(str, str.find_last_not_of("abc", str_last_pos)); // not found
}
