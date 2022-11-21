// cppreference link https://en.cppreference.com/w/cpp/string/basic_string_view/empty
#include <iostream>
#include <string_view>

// Print a string surrounded by single quotes, its
// length and whether it is considered empty.
void check_string(std::string_view ref)
{
    std::cout << std::boolalpha
              << "'" << ref << "' has " << ref.size()
              << " character(s); emptiness: " << ref.empty() << '\n';
}

int main(int argc, char** argv)
{
    // An empty string
    check_string("");

    // Almost always not empty: argv[0]
    if (argc > 0)
        check_string(argv[0]);
}
