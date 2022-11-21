// cppreference link https://en.cppreference.com/w/cpp/experimental/basic_string_view/operator_at
#include <experimental/string_view>
#include <iostream>
int main()
{
    std::string str = "Exemplar";
    std::experimental::string_view v = str;
    std::cout << v[2] << '\n';
    //  v[2] = 'y'; // Error: cannot modify through a string view
    str[2] = 'y';
    std::cout << v[2] << '\n';
}
