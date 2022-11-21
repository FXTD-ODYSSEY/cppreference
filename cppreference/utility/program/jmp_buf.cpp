// cppreference link https://en.cppreference.com/w/cpp/utility/program/jmp_buf
#include <csetjmp>
#include <iostream>

std::jmp_buf my_jump_buffer;

[[noreturn]] void foo(int count)
{
    std::cout << "foo(" << count << ") called\n";
    std::longjmp(my_jump_buffer, count + 1); // setjmp() will return count+1
}

int main()
{
    volatile int count = 0; // modified locals in setjmp scope must be volatile
    if (setjmp(my_jump_buffer) != 5) { // equality against constant expression in an if
        count = count + 1; // ++count, count += 1, etc on 'volatile'-qualified
                           // left operand are deprecated since C++20 (P1152)
        foo(count); // This will cause setjmp() to exit
    }
}
