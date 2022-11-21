// cppreference link https://en.cppreference.com/w/cpp/experimental/shuffle
#include <experimental/algorithm>
#include <iostream>
#include <string>

int main()
{
    std::string sample { "ABCDEF" };

    for (int i = 0; i != 4; ++i) {
        std::experimental::shuffle(sample.begin(), sample.end());
        std::cout << sample << '\n';
    }
}
