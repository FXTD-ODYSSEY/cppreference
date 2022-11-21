// cppreference link https://en.cppreference.com/w/cpp/header/ciso646
#include <ciso646>
#ifdef _LIBCPP_VERSION
#error Using LLVM libc++
#elif __GLIBCXX__ // Note: only version 6.1 or newer define this in ciso646
#error Using GNU libstdc++
#elif _CPPLIB_VER // Note: used by Visual Studio
#error Using Microsoft STL
#else
#error Using an unknown standard library
#endif
