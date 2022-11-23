// cplusplus link https://cplusplus.com/reference/ios\ios_base\iword
// internal extensible array
#include <iostream> // std::cout, std::cerr

// custom manipulator with per-stream static data:
std::ostream& Counter(std::ostream& os)
{
    const static int index = os.xalloc();
    return os << ++os.iword(index);
}

int main()
{
    std::cout << Counter << ": first line\n";
    std::cout << Counter << ": second line\n";
    std::cout << Counter << ": third line\n";
    // cerr has its own count
    std::cerr << Counter << ": error line\n";
    return 0;
}
