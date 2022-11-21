// cppreference link https://en.cppreference.com/w/cpp/string/basic_string/substr
#include <iostream>
#include <string>

int main()
{
    std::string a = "0123456789abcdefghij";

    // count is npos, returns [pos, size())
    std::string sub1 = a.substr(10);
    std::cout << sub1 << '\n';

    // both pos and pos+count are within bounds, returns [pos, pos+count)
    std::string sub2 = a.substr(5, 3);
    std::cout << sub2 << '\n';

    // pos is within bounds, pos+count is not, returns [pos, size())
    std::string sub4 = a.substr(a.size() - 3, 50);
    // this is effectively equivalent to
    // std::string sub4 = a.substr(17, 3);
    // since a.size() == 20, pos == a.size()-3 == 17, and a.size()-pos == 3

    std::cout << sub4 << '\n';

    try {
        // pos is out of bounds, throws
        std::string sub5 = a.substr(a.size() + 3, 50);
        std::cout << sub5 << '\n';
    } catch (const std::out_of_range& e) {
        std::cout << "pos exceeds string size\n";
    }
}
