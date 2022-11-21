// cppreference link https://en.cppreference.com/w/cpp/utility/optional/deduction_guides
#include <optional>

int main()
{
    int a[2];
    std::optional oa { a }; // explicit deduction guide is used in this case
}
