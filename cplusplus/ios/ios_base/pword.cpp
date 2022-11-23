// cplusplus link https://cplusplus.com/reference/ios\ios_base\pword
// pword example
#include <iostream> // std::ios, std::cout, std::cerr, std::clog

const int name_index = std::ios::xalloc();

// stores pointer in extensible array:
void SetStreamName(std::ios& stream, const char* name)
{
    stream.pword(name_index) = const_cast<char*>(name);
}

// custom manipulator that uses stored pointer:
std::ostream& StreamName(std::ostream& os)
{
    const char* name = static_cast<const char*>(os.pword(name_index));
    if (name)
        os << name;
    else
        os << "(unknown)";
    return os;
}

int main()
{
    SetStreamName(std::cout, "standard output stream");
    SetStreamName(std::cerr, "standard error stream");
    std::cout << StreamName << '\n';
    std::cerr << StreamName << '\n';
    std::clog << StreamName << '\n';
    return 0;
}
