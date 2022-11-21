// cppreference link https://en.cppreference.com/w/cpp/io/istrstream/istrstream
#include <iostream>
#include <strstream>

int main()
{
    std::istrstream s1("1 2 3"); // string literal
    int n1, n2, n3;
    if (s1 >> n1 >> n2 >> n3)
        std::cout << n1 << ", " << n2 << ", " << n3 << '\n';

    char arr[] = { '4', ' ', '5', ' ', '6' };
    std::istrstream s2(arr, sizeof arr);
    if (s2 >> n1 >> n2 >> n3)
        std::cout << n1 << ", " << n2 << ", " << n3 << '\n';
}
