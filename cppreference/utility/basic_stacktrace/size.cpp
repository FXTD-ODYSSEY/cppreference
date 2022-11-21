// cppreference link https://en.cppreference.com/w/cpp/utility/basic_stacktrace/size
#include <iostream>
#include <stacktrace>

int main()
{
    auto trace = std::stacktrace::current();

    std::cout << "trace contains " << trace.size() << " entries.\n";
}
