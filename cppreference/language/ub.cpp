// cppreference link https://en.cppreference.com/w/cpp/language/ub
#include <iostream>

bool fermat()
{
    const int MAX = 1000;
    int a = 1, b = 1, c = 1;
    // Endless loop with no side effects is UB
    while (true) {
        if (((a * a * a) == ((b * b * b) + (c * c * c))))
            return true;
        a++;
        if (a > MAX) {
            a = 1;
            b++;
        }
        if (b > MAX) {
            b = 1;
            c++;
        }
        if (c > MAX) {
            c = 1;
        }
    }
    return false;
}

int main()
{
    if (fermat())
        std::cout << "Fermat's Last Theorem has been disproved.\n";
    else
        std::cout << "Fermat's Last Theorem has not been disproved.\n";
}
