// cppreference link https://en.cppreference.com/w/cpp/numeric/random/seed_seq/seed_seq
#include <iterator>
#include <random>
#include <sstream>
int main()
{
    std::seed_seq s1; // default-constructible
    std::seed_seq s2 { 1, 2, 3 }; // can use list-initialization
    std::seed_seq s3 = { -1, 0, 1 }; // another form of list-initialization
    int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    std::seed_seq s4(a, a + 10); // can use iterators
    std::istringstream buf("1 2 3 4 5");
    std::istream_iterator<int> beg(buf), end;
    std::seed_seq s5(beg, end); // even stream input iterators
}
