// cplusplus link https://cplusplus.com/reference/cstdlib\_Exit
/* _Exit example */
#include <stdio.h> /* printf, fopen */
#include <stdlib.h> /* _Exit, EXIT_FAILURE */

int main()
{
    FILE* pFile;
    pFile = fopen("myfile.txt", "r");
    if (pFile == NULL) {
        printf("Error opening file");
        _Exit(EXIT_FAILURE);
    } else {
        /* file operations here */
    }
    return 0;
}
