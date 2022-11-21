// cppreference link https://en.cppreference.com/w/cpp/comment
#include <iostream>
/* C-style comments can contain
multiple lines */
/* or just one */

/**************
 *  you can insert any *, but
 *  you can't make comments nested
 */

// C++-style comments can comment one line

// or, they can
// be strung together

int main()
{
    // comments are removed before preprocessing,
    // so ABC is "1", not "1//2134", and "1 hello world"
    // will be printed
#define ABC 1 // 2134
    std::cout << ABC << " hello world\n";

    // The below code won't be run
    // return 1;

    // The below code will be run
    return 0;
}
