// cppreference link https://en.cppreference.com/w/cpp/io/c/vfprintf
#include <cstdarg>
#include <cstdio>
#include <ctime>
#include <vector>

void debug_log(const char* fmt, ...)
{
    std::time_t t = std::time(nullptr);
    char time_buf[100];
    std::strftime(time_buf, sizeof time_buf, "%D%T", std::gmtime(&t));
    va_list args1;
    va_start(args1, fmt);
    va_list args2;
    va_copy(args2, args1);
    std::vector<char> buf(1 + std::vsnprintf(nullptr, 0, fmt, args1));
    va_end(args1);
    std::vsnprintf(buf.data(), buf.size(), fmt, args2);
    va_end(args2);
    std::printf("%s [debug]:%s\n", time_buf, buf.data());
}

int main()
{
    debug_log("Logging,%d,%d,%d", 1, 2, 3);
}
