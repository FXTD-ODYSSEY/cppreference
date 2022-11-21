// cppreference link https://en.cppreference.com/w/cpp/language/attributes/nodiscard
struct [[nodiscard]] error_info { /*...*/
};
error_info enable_missile_safety_mode()
{ /*...*/
    return {};
}
void launch_missiles()
{ /*...*/
}
void test_missiles()
{
    enable_missile_safety_mode(); // compiler may warn on discarding a nodiscard value
    launch_missiles();
}
error_info& foo()
{
    static error_info e; /*...*/
    return e;
}
void f1()
{
    foo(); // nodiscard type is not returned by value, no warning
}
// nodiscard( string-literal ) (since C++20):
[[nodiscard("PURE FUN")]] int strategic_value(int x, int y) { return x ^ y; }

int main()
{
    strategic_value(4, 2); // compiler may warn on discarding a nodiscard value
    auto z = strategic_value(0, 0); // ok: return value is not discarded
    return z;
}
