// cppreference link https://en.cppreference.com/w/cpp/utility/as_const
#include <cassert>
#include <string>
#include <type_traits>
#include <utility>

int main()
{
    std::string mutableString = "Hello World!";
    auto&& constRef = std::as_const(mutableString);

    //  mutableString.clear(); // OK
    //  constRef.clear(); // error: 'constRef' is 'const' qualified,
    //        but 'clear' is not marked const

    assert(&constRef == &mutableString);
    assert(&std::as_const(mutableString) == &mutableString);

    using ExprType = std::remove_reference_t<decltype(std::as_const(mutableString))>;

    static_assert(std::is_same_v<std::remove_const_t<ExprType>, std::string>,
        "ExprType should be some kind of string.");
    static_assert(!std::is_same_v<ExprType, std::string>,
        "ExprType shouldn't be a mutable string.");
}
