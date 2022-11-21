// cppreference link https://en.cppreference.com/w/cpp/io/ostrstream/ostrstream
#include <iostream>
#include <strstream>

int main()
{
    std::ostrstream s1; // dynamic buffer
    s1 << 1 << ' ' << 3.14 << " example\n"
       << std::ends;
    std::cout << s1.str();
    s1.freeze(false);

    char arr[15] = "Hello";

    std::ostrstream s2(arr, sizeof arr, std::ios_base::app);
    s2 << ", world!" << std::ends;
    std::cout << s2.str() << '\n';
    std::cout << arr << '\n'; // streams use the provided arrays
}
