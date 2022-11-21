// cppreference link https://en.cppreference.com/w/cpp/string/basic_string/begin
#include <iostream>
#include <string>

int main()
{
    std::string s("Exemplar");
    *s.begin() = 'e';
    std::cout << s << '\n';

    auto i = s.cbegin();
    std::cout << *i << '\n';
    //  *i = 'E'; // error: i is a constant iterator
}
