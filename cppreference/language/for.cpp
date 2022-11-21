// cppreference link https://en.cppreference.com/w/cpp/language/for
#include <iostream>
#include <vector>

int main()
{
    std::cout << "1) typical loop with a single statement as the body:\n";
    for (int i = 0; i < 10; ++i)
        std::cout << i << ' ';

    std::cout << "\n\n"
                 "2) init-statement can declare multiple names, as "
                 "long as they can use the same decl-specifier-seq:\n";
    for (int i = 0, *p = &i; i < 9; i += 2) {
        std::cout << i << ':' << *p << ' ';
    }

    std::cout << "\n\n"
                 "3) condition may be a declaration:\n";
    char cstr[] = "Hello";
    for (int n = 0; char c = cstr[n]; ++n)
        std::cout << c;

    std::cout << "\n\n"
                 "4) init-statement can use the auto type specifier:\n";
    std::vector<int> v = { 3, 1, 4, 1, 5, 9 };
    for (auto iter = v.begin(); iter != v.end(); ++iter) {
        std::cout << *iter << ' ';
    }

    std::cout << "\n\n"
                 "5) init-statement can be an expression:\n";
    int n = 0;
    for (std::cout << "Loop start\n";
         std::cout << "Loop test\n";
         std::cout << "Iteration " << ++n << '\n')
        if (n > 1)
            break;

    std::cout << "\n"
                 "6) constructors and destructors of objects created "
                 "in the loop's body are called per each iteraton:\n";
    struct S {
        S(int x, int y) { std::cout << "S::S(" << x << ", " << y << "); "; }
        ~S() { std::cout << "S::~S()\n"; }
    };
    for (int i { 0 }, j { 5 }; i < j; ++i, --j)
        S s { i, j };
}
