// cplusplus link https://cplusplus.com/reference/functional\reference_wrapper\operator_func
// reference_wrapper::operator()
#include <functional> // std::reference_wrapper, std::plus
#include <iostream> // std::cout

struct AB {
    int a, b;
    int sum() { return a + b; }
};

int ten() { return 10; } // function

int main()
{
    std::plus<int> plus_ints; // function object
    int AB::*p_a = &AB::a; // pointer to data member
    int (AB::*p_sum)() = &AB::sum; // pointer to member function

    // construct reference_wrappers using std::ref:
    auto ref_ten = std::ref(ten); // function
    auto ref_plus_ints = std::ref(plus_ints); // function object
    auto ref_AB_sum = std::ref(p_sum); // pointer to member function
    auto ref_AB_a = std::ref(p_a); // pointer to data member

    AB ab { 100, 200 };

    // invocations:
    std::cout << ref_ten() << '\n';
    std::cout << ref_plus_ints(5, 10) << '\n';
    std::cout << ref_AB_sum(ab) << '\n';
    std::cout << ref_AB_a(ab) << '\n';
    std::cout << ref_AB_a(&ab) << '\n'; // (also ok with pointer)

    return 0;
}
