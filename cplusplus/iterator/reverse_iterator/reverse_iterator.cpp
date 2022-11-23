// cplusplus link https://cplusplus.com/reference/iterator\reverse_iterator\reverse_iterator
// reverse_iterator example
#include <iostream> // std::cout
#include <iterator> // std::reverse_iterator
#include <vector> // std::vector

int main()
{
    std::vector<int> myvector;
    for (int i = 0; i < 10; i++)
        myvector.push_back(i);

    typedef std::vector<int>::iterator iter_type;
    // ? 0 1 2 3 4 5 6 7 8 9 ?
    iter_type from(myvector.begin()); //   ^
                                      //         ------>
    iter_type until(myvector.end()); //                       ^
                                     //
    std::reverse_iterator<iter_type> rev_until(from); // ^
                                                      //         <------
    std::reverse_iterator<iter_type> rev_from(until); //                     ^

    std::cout << "myvector:";
    while (rev_from != rev_until)
        std::cout << ' ' << *rev_from++;
    std::cout << '\n';

    return 0;
}
