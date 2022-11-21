// cppreference link https://en.cppreference.com/w/cpp/io/basic_istream/ignore
#include <iostream>
#include <limits>
#include <sstream>

constexpr auto max_size = std::numeric_limits<std::streamsize>::max();

int main()
{
    std::istringstream input("1\n"
                             "some non-numeric input\n"
                             "2\n");
    for (;;) {
        int n;
        input >> n;

        if (input.eof() || input.bad())
            break;
        else if (input.fail()) {
            input.clear(); // unset failbit
            input.ignore(max_size, '\n'); // skip bad input
        } else
            std::cout << n << '\n';
    }
}
