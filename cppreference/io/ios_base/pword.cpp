// cppreference link https://en.cppreference.com/w/cpp/io/ios_base/pword
#include <iostream>

template <class charT, class traits = std::char_traits<charT>>
class mystream : public std::basic_ostream<charT, traits> {
public:
    static const int xindex;

    mystream(std::basic_ostream<charT, traits>& ostr)
        : std::basic_ostream<charT, traits>(ostr.rdbuf())
    {
        this->pword(xindex) = this;
    }

    void myfn()
    {
        *this << "[special handling for mystream]";
    }
};

// each specialization of mystream obtains a unique index from xalloc()
template <class charT, class traits>
const int mystream<charT, traits>::xindex = std::ios_base::xalloc();

// This I/O manipulator will be able to recognize ostreams that are mystreams
// by looking up the pointer stored in pword
template <class charT, class traits>
std::basic_ostream<charT, traits>& mymanip(std::basic_ostream<charT, traits>& os)
{
    if (os.pword(mystream<charT, traits>::xindex) == &os)
        static_cast<mystream<charT, traits>&>(os).myfn();
    return os;
}

int main()
{
    std::cout << "cout, narrow-character test " << mymanip << '\n';

    mystream<char> myout(std::cout);
    myout << "myout, narrow-character test " << mymanip << '\n';

    std::wcout << "wcout, wide-character test " << mymanip << '\n';

    mystream<wchar_t> mywout(std::wcout);
    mywout << "mywout, wide-character test " << mymanip << '\n';
}
